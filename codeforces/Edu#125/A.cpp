// Problem: A. Integer Moves
// Contest: Codeforces - Educational Codeforces Round 125 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1657/problem/A
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
		ll x, y;
		cin >> x >> y;
		ll temp = abs((x * x) + (y * y));
		float y1 = sqrt(temp);
		int y2 = sqrt(temp);
		if(x == 0 && y == 0){
			cout << 0 << "\n";
		}
		else if(y1 - y2 > 0){
			cout << 2 << "\n";
		}
		else{
			cout << 1 << "\n";
		}
  	}
	return 0;
}