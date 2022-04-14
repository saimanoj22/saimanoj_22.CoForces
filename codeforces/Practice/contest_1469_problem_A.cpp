// Problem: A. Regular Bracket Sequence
// Contest: Codeforces - Educational Codeforces Round 101 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1469/problem/A
// Memory Limit: 512 MB
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
		ll n = s.length();
		if(n % 2 != 0){
			cout << "NO\n";
		}
		else{
			if(s[0] != ')' && s[n - 1] != '('){
				cout << "YES\n";
			}
			else{
				cout << "NO\n";
			}
		}
  	}
	return 0;
}