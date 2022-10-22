// Problem: A. Planets
// Contest: Codeforces - Codeforces Round #823 (Div. 2)
// URL: https://codeforces.com/contest/1730/problem/A
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
		ll n, c;
		cin >> n >> c;
		vector<ll> v(n);
		map<ll, ll> mp;
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			mp[v[i]]++;
		}
		ll ans = 0;
		for(auto m : mp){
			ans += min(m.second, c);
		}
		cout << ans << "\n";
		
  	}
	return 0;
}