// Problem: B. Triangles on a Rectangle
// Contest: Codeforces - Educational Codeforces Round 119 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1620/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll w, h;
		cin >> w >> h;
		ll max1 = 0;
		
		ll lx, ly;
		cin >> lx;
		ll lxrr[lx];
		for(ll i = 0; i < lx; i++){
			cin >> lxrr[i];
		}
		max1 = max(lxrr[lx - 1] - lxrr[0], max1);
		cin >> ly;
		ll lyrr[ly];
		for(ll i = 0; i < ly; i++){
			cin >> lyrr[i];
		}
		max1 = max(lyrr[ly - 1] - lyrr[0], max1);
		
		ll area1 = max1 * h;
		
		ll max2 = 0;
		ll wx, wy;
		cin >> wx;
		ll wxrr[wx];
		for(ll i = 0; i < wx; i++){
			cin >> wxrr[i];
		}
		max2 = max(wxrr[wx - 1] - wxrr[0], max2);
		cin >> wy;
		ll wyrr[wy];
		for(ll i = 0; i < wy; i++){
			cin >> wyrr[i];
		}
		max2 = max(wyrr[wy - 1] - wyrr[0], max2);
		
		ll area2 = max2 * w;
		cout << max(area1, area2) << "\n";
		
  	}
	return 0;
}