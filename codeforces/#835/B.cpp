// Problem: B. Atilla's Favorite Problem
// Contest: Codeforces - Codeforces Round #835 (Div. 4)
// URL: https://codeforces.com/contest/1760/problem/B
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
		ll n;
		cin >> n;
		string s;
		cin >> s;
		ll maxi = 0;
		for(ll i = 0; i < n; i++){
			ll digit = s[i] - 'a';
			maxi = max(maxi, digit);
		}
		cout << maxi + 1 << "\n";
  	}
	return 0;
}