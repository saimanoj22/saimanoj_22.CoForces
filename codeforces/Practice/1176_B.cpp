// Problem: B. Merge it!
// Contest: Codeforces - Codeforces Round #565 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1176/B
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
		vector<ll> v(n);
		map<ll, ll> mp;
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			mp[v[i] % 3]++;
		}
		// cout << mp[0] << " " << mp[1] << " " << mp[2] << "\n";
		ll ans = mp[0];
		ll temp = min(mp[1], mp[2]);
		ans += temp;
		ll one = mp[1];
		mp[1] -= temp;
		mp[2] -= temp;
		if(mp[1] > 0)ans += mp[1] / 3;
		if(mp[2] > 0)ans += mp[2] / 3;
		cout << ans << "\n";
  	}
	return 0;
}