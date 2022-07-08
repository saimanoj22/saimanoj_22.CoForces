// Problem: A. Free Cash
// Contest: Codeforces - Codeforces Round #147 (Div. 2)
// URL: https://codeforces.com/problemset/problem/237/A
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
  	ll max = 0;
  	for(ll i = 0; i < n; i++){
  		ll h, m;
  		cin >> h >> m;
  		ll time = h * 60 + m;
  		mp[time]++;
  		if(max < mp[time])max = mp[time];
  	}
  	cout << max << "\n";
	return 0;
}