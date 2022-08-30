// Problem: B. Valuable Resources
// Contest: Codeforces - Codeforces Round #276 (Div. 2)
// URL: https://codeforces.com/problemset/problem/485/B
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
  	// vector<pair<ll,ll>> v;
  	ll minx = 1e9, maxx = -1e9, miny = 1e9, maxy = -1e9;
  	for(ll i = 0; i < n; i++){
  		ll a, b;
  		cin >> a >> b;
  		minx = min(minx, a);
  		maxx = max(maxx, a);
  		miny = min(miny, b);
  		maxy = max(maxy, b);
  		// v.push_back({a, b});
  	}
  	ll diffx = abs(minx - maxx);
  	ll diffy = abs(miny - maxy);
  	ll maxdiff = max(diffx, diffy);
  	cout << (maxdiff * maxdiff) << "\n";
	return 0;
}