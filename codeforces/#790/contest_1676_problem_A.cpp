// Problem: A. Lucky?
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/contest/1676/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		string s;
		cin >> s;
		int a = s[0] - '0' + s[1] - '0' + s[2] - '0';
		int b = s[3] - '0' + s[4] - '0' + s[5] - '0';
		if(a == b){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
  	}
	return 0;
}