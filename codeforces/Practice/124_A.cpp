// Problem: A. The number of positions
// Contest: Codeforces - Codeforces Beta Round #92 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/124/A
// Memory Limit: 256 MB
// Time Limit: 500 ms
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
  	ll n, a, b;
  	cin >> n >> a >> b;
  	cout << min(n - a, b + 1) << "\n";
	return 0;
}