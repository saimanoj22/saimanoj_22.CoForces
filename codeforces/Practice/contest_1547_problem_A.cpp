// Problem: A. Shortest Path with Obstacle
// Contest: Codeforces - Codeforces Round #731 (Div. 3)
// URL: https://codeforces.com/contest/1547/problem/A
// Memory Limit: 512 MB
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
		ll xa, ya, xb, yb, xf, yf;
		cin >> xa >> ya >> xb >> yb >> xf >> yf;
		ll ans = abs(xb - xa) + abs(yb - ya);
		if((xa == xb && xb == xf)){
			if((yf < ya && yf > yb) || (yf < yb && yf > ya)){
				ans += 2;
			}
		}
		if(ya == yb && yb == yf){
			if((xf < xa && xf > xb) || (xf < xb && xf > xa)){
				ans += 2;
			}
		}
		cout << ans << "\n";
  	}
	return 0;
}