#include <bits/stdc++.h>
#define maxn 100086

using namespace std;

vector<string> v, w;
char s[maxn];

int main(){
	v.clear();
	freopen("m.out", "r", stdin);
	while(gets(s) != NULL){
		string S = s;
		v.push_back(s);
	}
	freopen("m.out", "w", stdout);
	sort(v.begin(), v.end());
	for(int i = 0;i < v.size();i++){
		if(v[i][0] == '@') printf("%s\n", v[i].c_str());
	}
	int len = v.size();
	
	v.clear();
	freopen("v.out", "r", stdin);
	while(gets(s) != NULL){
		string S = s;
		v.push_back(s);
	}
	freopen("v.out", "w", stdout);
	
	for(int i = 0;i < v.size();i++){
		if(v[i].length() <= 20 || v[i][20] != '@') continue;
		v[i] = v[i].substr(20);
		if(v[i][11] == '$' && v[i][12] == ' ' && v[i][13] == '0') continue;
		w.push_back(v[i]);
	}
	sort(w.begin(), w.end());
	int wlen = w.size();
	for(int i = 0;i < wlen;i++) printf("%s\n", w[i].c_str());
}
