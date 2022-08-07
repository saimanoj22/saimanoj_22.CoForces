// Problem: A. Traveling Salesman Problem
// Contest: Codeforces - Codeforces Round #812 (Div. 2)
// URL: https://codeforces.com/contest/1713/problem/A
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
		ll maxx = 0, minx = 0, maxy = 0, miny = 0;
		for(ll i = 0; i < n; i++){
			ll x, y;
			cin >> x >> y;
			if(x == 0){
				maxy = max(maxy, y);
				miny = min(miny, y);
			}
			else{
				maxx = max(maxx, x);
				minx = min(minx, x);
			}
		}
		minx = abs(0 - minx);
		miny = abs(0 - miny);
		cout << (maxx + minx + maxy + miny) * 2 << "\n";
  	}
	return 0;
}