// Problem: A. AB Balance
// Contest: Codeforces - Educational Codeforces Round 116 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1606/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
		int n = s.length();
		if(s[0] == s[n - 1])cout << s << "\n";
		else{
			if(s[0] == 'a'){
				s[0] = 'b';
				cout << s << "\n";
			}
			else{
				s[0] = 'a';
				cout << s << "\n";
			}
		}
  	}
	return 0;
}