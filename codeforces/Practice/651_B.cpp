// Problem: B. Beautiful Paintings
// Contest: Codeforces - Codeforces Round #345 (Div. 2)
// URL: https://codeforces.com/problemset/problem/651/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
  	ll n;
  	cin >> n;
  	map<ll, ll> mp;
  	ll maxi = 0;
  	for(ll i = 0; i < n; i++){
  		ll a;
  		cin >> a;
  		mp[a]++;
  		maxi = max(mp[a], maxi);
  	}
  	cout << n - maxi << "\n";
	return 0;
}