#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cstring>
using namespace std;

const int MAXN = 10000005;

const char hexd[] = "0123456789abcdef";
const char decd[] = "0123456789";

char data[MAXN];
int standard[MAXN][2], src_ans[MAXN][2];
int tot = 0;
long long freq = 0;

void get_data() {
    srand(time(NULL));
    tot = 0;
    int T = rand() % 5 + 1;              //生成数据组数
    while(T--) {
        data[tot++] = '^';
        int type = rand();         //判断该组数据的类型
        if(type%2 == 0) {               //如果是偶数生成寄存器型数据
            int time_len = rand()%6;
            int pc_len = 8;/*rand()%2 == 0 ? 8 : 7;
            pc_len += rand()%2 == 0 ? 1 : 0;
            pc_len += rand()%2 == 0 ? -1 : 0;*/
            int grf_len = rand()%6;
            int data_len = 8;/*rand()%2 == 0 ? 8 : 7;
            data_len += rand()%2 == 0 ? 1 : 0;
            data_len += rand()%2 == 0 ? -1 : 0;*/
            for(int i = 1; i <= time_len; i++) data[tot++] = decd[rand()%10];
            data[tot++] = '@';
            for(int i = 1; i <= pc_len; i++) data[tot++] = hexd[rand()%16];
            data[tot++] = ':';
            if(rand()%2 == 0) data[tot++] = ' ';
            data[tot++] = '$';
            for(int i = 1; i <= grf_len; i++) data[tot++] = decd[rand()%10];
            if(rand()%2 == 0) data[tot++] = ' ';
            data[tot++] = '<';
            data[tot++] = '=';
            if(rand()%2 == 0) data[tot++] = ' ';
            for(int i = 1; i <= data_len; i++) data[tot++] = hexd[rand()%16];
            data[tot++] = '#';
        } else {                        //否则生成储存器型数据
            int time_len = rand()%6;
            int pc_len = 8;/*rand()%2 == 0 ? 8 : 7;
            pc_len += rand()%2 == 0 ? 1 : 0;
            pc_len += rand()%2 == 0 ? -1 : 0;*/
            int addr_len = 8;/*rand()%2 == 0 ? 8 : 7;
            addr_len += rand()%2 == 0 ? 1 : 0;
            addr_len += rand()%2 == 0 ? -1 : 0;*/
            int data_len = 8;/*rand()%2 == 0 ? 8 : 7;
            data_len += rand()%2 == 0 ? 1 : 0;
            data_len += rand()%2 == 0 ? -1 : 0;*/
            for(int i = 1; i <= time_len; i++) data[tot++] = decd[rand()%10];
            data[tot++] = '@';
            for(int i = 1; i <= pc_len; i++) data[tot++] = hexd[rand()%16];
            data[tot++] = ':';
            if(rand()%2 == 0) data[tot++] = ' ';
            data[tot++] = '*';
            for(int i = 1; i <= addr_len; i++) data[tot++] = hexd[rand()%16];
            if(rand()%2 == 0) data[tot++] = ' ';
            data[tot++] = '<';
            data[tot++] = '=';
            if(rand()%2 == 0) data[tot++] = ' ';
            for(int i = 1; i <= data_len; i++) data[tot++] = hexd[rand()%16];
            data[tot++] = '#';
        }
    }
    for(int i = 0; i < tot; i++) {
        printf("%c", data[i]);
        if(data[i] == '#') cout << endl;
    }
}

void write_file(int v) {        //v是1写std，v是0写src
    FILE *fp;
    if(v == 1) fp = fopen("my_checker_std.v", "w");
    else fp = fopen("my_checker_src.v", "w");
    fprintf(fp, "`timescale 1ns / 1ps\n");
    if(v == 1) fprintf(fp, "`include \"std.v\"\n");
    else fprintf(fp, "`include \"src.v\"\n");

    fprintf(fp, "module tb;\n");

	fprintf(fp, "reg clk;\n");
	fprintf(fp, "reg reset;\n");
	fprintf(fp, "reg [7:0] char;\n");
	fprintf(fp, "reg [15:0] freq;\n");
	fprintf(fp, "reg finish;\n");

    fprintf(fp, "wire [1:0] format_type;\n");
	fprintf(fp, "wire [3:0] error_code;\n");

    fprintf(fp, "always @(posedge clk) begin\n");
    fprintf(fp, "   if (!reset && !finish) begin\n");
    fprintf(fp, "       $display(\"%%d %%d\", format_type, error_code);\n");
    fprintf(fp, "   end\n");
    fprintf(fp, "end\n");

	fprintf(fp, "cpu_checker uut (\n");
	fprintf(fp, "	.clk(clk),\n");
	fprintf(fp, "	.reset(reset),\n");
	fprintf(fp, "	.char(char), \n");
    fprintf(fp, "   .freq(16'd%lld),\n", freq);
	fprintf(fp, "	.format_type(format_type),\n");
    fprintf(fp, "   .error_code(error_code)\n");
	fprintf(fp, ");\n");

	fprintf(fp, "initial begin\n");
	fprintf(fp, "	$dumpvars;\n");
	fprintf(fp, "	clk = 0;\n");
	fprintf(fp, "	reset = 1;\n");
	fprintf(fp, "	char = 0;\n");
	fprintf(fp, "	freq = 2;\n");
	fprintf(fp, "	finish = 0;\n");
	fprintf(fp, "   #10 reset = 0;\n");
	for(int i = 0; i < tot; i++) {
        fprintf(fp, "   #2 char = \"%c\";\n", data[i]);
	}
	fprintf(fp, "   #20; finish = 1; $finish;\n");
	fprintf(fp, "end\n");

    fprintf(fp, "always #1 clk = ~clk;\n");

    fprintf(fp, "endmodule\n");
    fclose(fp);
}

void Running() {
    system("iverilog -o my_checker_std.v.out my_checker_std.v");
    system("vvp my_checker_std.v.out > std.txt");
    system("iverilog -o my_checker_src.v.out my_checker_src.v");
    system("vvp my_checker_src.v.out > src.txt");
}

char tmp[MAXN];
int std_ans_len = 0, src_ans_len = 0;
void readans() {
    FILE *fp = fopen("std.txt", "r");
    fgets(tmp, MAXN-1, fp);
    while(fscanf(fp, "%d%d", &standard[std_ans_len][0], &standard[std_ans_len][1]) == 2) std_ans_len++;
    //freopen("CON", "w", stdout);
    fp = fopen("src.txt", "r");
    fgets(tmp, MAXN-1, fp);
    while(fscanf(fp, "%d%d", &src_ans[src_ans_len][0], &src_ans[src_ans_len][1]) == 2) src_ans_len++;
    //freopen("CON", "w", stdout);
    fclose(fp);
}

void comp() {
    if(std_ans_len != src_ans_len) {
        cout << "Failed at answer length!" << "\n";
        system("pause");
        return;
    }
    bool t = false;
    for(int i = 0; i < std_ans_len; i++) if(src_ans[i][0] != standard[i][0] || src_ans[i][1] != standard[i][1]) {
        cout << "Failed at line " << i << " ."<< "\n";
        cout << "Get " << src_ans[i][0] << ' ' << src_ans[i][1] << "\n";
        cout << "Expected " << standard[i][0] << ' ' << standard[i][1] << "\n"<< "\n";
        int l=i+1,r=i-1;
        while(data[l] != '^') l--;
        l--;
        while(data[l] != '^') l--;
        while(data[r] != '#') r++;
        r++;
        while(data[r] != '#') r++;
        for(int j = l; j <= r; j++) printf("%c", data[j]);
        cout << endl;
        printf("%c", data[i]);
        system("pause");
        t = true;
    }
    if(!t) cout << "Passed!" << "\n";
    //system("pause");
}

int main() {
    int s = 0;
    while(++s) {
        freq = pow(2, rand()%15+1);
        memset(standard, 0 ,sizeof(standard));
        memset(src_ans, 0, sizeof(src_ans));
        memset(data, 0, sizeof(data));
        std_ans_len = 0;
        src_ans_len = 0;
        tot = 0;
        cout << "Case #" << s << ':' << "\n";
        get_data();
        write_file(0);
        write_file(1);
        Running();
        readans();
        comp();
        cerr << "\n";
    }
    return 0;
}
