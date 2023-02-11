// Problem: A. Codeforces Checking
// Contest: Codeforces - Codeforces Round #849 (Div. 4)
// URL: https://codeforces.com/contest/1791/problem/A
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
		char c;
		cin >> c;
		string s = "codeforces";
		bool flag = false;
		for(ll i = 0; i < s.length(); i++){
			if(s[i] == c)flag = true;
		}
		if(flag)cout << "YES\n";
		else cout << "NO\n";
  	}
	return 0;
}