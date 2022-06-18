// Problem: B. Paranoid String
// Contest: Codeforces - Codeforces Round #800 (Div. 2)
// URL: https://codeforces.com/contest/1694/problem/B
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
		ll sum = 0;
		for(ll i = 0; i < n - 1; i++){
			if(s[i] != s[i + 1]){
				sum += i + 1;
			}
		}
		cout << sum + n << "\n";
  	}
	return 0;
}