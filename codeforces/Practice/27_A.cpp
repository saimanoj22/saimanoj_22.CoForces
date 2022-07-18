// Problem: A. Next Test
// Contest: Codeforces - Codeforces Beta Round #27 (Codeforces format, Div. 2)
// URL: https://codeforces.com/problemset/problem/27/A
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
  	ll n;
  	cin >> n;
  	map<ll, ll> mp;
  	for(ll i = 0; i < n; i++){
  		ll a;
  		cin >> a;
  		mp[a]++;
  	}
  	ll ans = -1;
  	for(ll i = 1; i <= n; i++){
  		if(mp.find(i) == mp.end()){
  			ans = i;
  			break;
  		}
  	}
  	if(ans < 0)cout << n + 1 << "\n";
  	else cout << ans << "\n";
	return 0;
}