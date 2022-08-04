// Problem: B. Party
// Contest: Codeforces - Codeforces Round #810 (Div. 2)
// URL: https://codeforces.com/contest/1711/problem/B
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
		ll n, m;
		cin >> n >> m;
		vector<ll> v(n, 0);
		for(ll i = 0; i < n; i++){
			cin >> v[i];
		}
			map<ll, ll> mp;
			ll minpair = 1e9;
			for(ll i = 0; i < m; i++){
				ll a, b;
				cin >> a >> b;
				mp[a - 1]++;
				mp[b - 1]++;
				minpair = min(minpair, v[a - 1] + v[b - 1]);
			}
			
			if(m % 2 == 0){
				cout << 0 << "\n";
			}
			else{
				ll minodd = 1e9;
				for(auto m : mp){
					if(m.second % 2){
						minodd = min(minodd, v[m.first]);
					}
				}
				cout << min(minodd, minpair) << "\n";
			}
  	}
	return 0;
}