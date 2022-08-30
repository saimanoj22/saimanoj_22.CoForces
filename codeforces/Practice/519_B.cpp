// Problem: B. A and B and Compilation Errors
// Contest: Codeforces - Codeforces Round #294 (Div. 2)
// URL: https://codeforces.com/problemset/problem/519/B
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
  	ll x = 0, y = 0, z = 0;
  	for(ll i = 0; i < n; i++){
  		ll a;
  		cin >> a;
  		x += a;
  	}
  	for(ll i = 0; i < n - 1; i++){
  		ll a;
  		cin >> a;
  		y += a;
  	}
  	for(ll i = 0; i < n - 2; i++){
  		ll a;
  		cin >> a;
  		z += a;
  	}
  	cout << x - y << "\n" << y - z << "\n";
	return 0;
}