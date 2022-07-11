// Problem: A. Wizards and Demonstration
// Contest: Codeforces - Codeforces Round #114 (Div. 2)
// URL: https://codeforces.com/problemset/problem/168/A
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
  	double n, x, y;
  	cin >> n >> x >> y;
  	double yy = y / 100.0;
  	ll g = ceil(yy * n);
  	cout << max(g - x, 0.0) << "\n";
	return 0;
}