#include <bits/stdc++.h>

using namespace std;

char s[10086];
int cnt = 0;

int main(){
	while(1){
		system("gen.exe");
		system("java -jar Mars_Changed.jar db mc CompactDataAtZero nc test.asm > m.out");
		system("java -jar Mars_Changed.jar mc CompactDataAtZero a dump .text HexText code.txt test.asm > log.txt");
		system("iverilog -o F:\\MyWorkspace\\Computer_Organization\\assets\\P5Judge\\tb.out -I F:\\MyWorkspace\\Computer_Organization\\assets\\P5Judge\\src -y F:\\MyWorkspace\\Computer_Organization\\assets\\P5Judge F:\\MyWorkspace\\Computer_Organization\\assets\\P5Judge\\src\\mips_tb.v");
		system("vvp tb.out > v.out");
		system("del.exe");
		system("fc v.out m.out > log.txt");
		freopen("log.txt", "r", stdin);
		gets(s), gets(s);
		printf("test%d:", ++cnt);
		if(s[0] != 'F'){
			puts("Wrong Answer!");
			break;
		}
		puts("Accepted!");
	}
}
