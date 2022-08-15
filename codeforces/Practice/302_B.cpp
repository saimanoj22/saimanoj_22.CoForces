// Problem: B. Eugeny and Play List
// Contest: Codeforces - Codeforces Round #182 (Div. 2)
// URL: https://codeforces.com/problemset/problem/302/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	// ll testcases;
	// cin >> testcases;
	// while(testcases--){
  	// }
  	ll n, m;
  	cin >> n >> m;
  	vector<ll> v(n, 0);
  	for(ll i = 0; i < n; i++){
  		ll num, t;
  		cin >> num >> t;
  		v[i] = num * t;
  	}
  	for(ll i = 1; i < n; i++){
  		v[i] += v[i - 1];
  	}
  	// for(ll i = 0; i < v.size(); i++){
  		// cout << v[i] << " ";
  	// }
  	// cout << "\n\n";
  	for(ll i = 0; i < m; i++){
  		ll min;
  		cin >> min;
  		ll ans = lower_bound(v.begin(), v.end(), min) - v.begin();
  		cout << ans + 1 << "\n";
  	}
	return 0;
}