// Problem: A. Tiling with Hexagons
// Contest: Codeforces - Codeforces Round #133 (Div. 2)
// URL: https://codeforces.com/problemset/problem/216/A
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
  	ll a, b, c;
  	cin >> a >> b >> c;
	cout << a*b + b*c + c*a - a - b - c + 1 << "\n";
	return 0;
}