// Problem: A. Consecutive Sum
// Contest: Codeforces - Codeforces Round #821 (Div. 2)
// URL: https://codeforces.com/contest/1733/problem/A
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
		ll n, k;
		cin >> n >> k;
		vector<ll> v(n + 1);
		for(ll i = 1; i <= n; i++){
			cin >> v[i];
		}
		
		ll count = 0;
		for(ll i = 1; i <= k; i++){
			ll maxi = 0;
			for(ll j = i; j <= n; j += k){
				// cout << j << " ";
				maxi = max(maxi, v[j]);
			}
			// cout << "\n";
			count += maxi;
		}
		// cout << "\n";
		cout << count << "\n";
  	}
	return 0;
}