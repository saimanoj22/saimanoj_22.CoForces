// Problem: B. Effective Approach
// Contest: Codeforces - Codeforces Round #140 (Div. 2)
// URL: https://codeforces.com/problemset/problem/227/B
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
		map<ll, ll> vmp, pmp;
		for(ll i = 0; i < n; i++){
			ll a;
			cin >> a;
			vmp[a] = i + 1;
			pmp[a] = n - i;
		}
		ll m, v = 0, p = 0;
		cin >> m;
		for(ll i = 0; i < m; i++){
			ll b;
			cin >> b;
			v += vmp[b];
			p += pmp[b];
		}
		cout << v << " " << p << "\n";
	return 0;
}