// Problem: H. Maximal AND
// Contest: Codeforces - Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/H
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
		ll n, k;
		cin >> n >> k;
		vector<ll> v(n), count(31, 0);
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			for(ll j = 30; j >= 0; j--){
				if(v[i] & (1 << j))count[j]++;
			}
		}
		ll ans = 0;
		for(ll i = 30; i >= 0; i--){
			ll req = n - count[i];
			if(req <= k){
				k -= req;
				ans += (1 << i);
			}
		}
		cout << ans << "\n";
  	}
	return 0;
}