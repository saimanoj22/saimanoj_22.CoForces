// Problem: A. Parallel Projection
// Contest: Codeforces - Codeforces Round #844 (Div. 1 + Div. 2, based on VK Cup 2022 - Elimination Round)
// URL: https://codeforces.com/contest/1782/problem/A
// Memory Limit: 512 MB
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
		ll l, bb, h;
		cin >> l >> bb >> h;
		ll a, b, c, d;
		cin >> a >> b >> c >> d;
		ll x = abs(a - c) + abs(b - d);
		vector<ll> v = {a, b, c, d, l - a, bb - b, l - c, bb - d};
		ll y = *min_element(v.begin(), v.end());
		y += y;
		cout << x + y + h << "\n";
  	}
	return 0;
}