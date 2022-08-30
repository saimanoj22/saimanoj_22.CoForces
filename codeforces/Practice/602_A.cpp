// Problem: A. Two Bases
// Contest: Codeforces - Codeforces Round #333 (Div. 2)
// URL: https://codeforces.com/problemset/problem/602/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
  	ll n, bx;
  	cin >> n >> bx;
  	ll x = 0;
  	for(ll i = 0; i < n; i++){
  		ll a;
  		cin >> a;
  		x += pow(bx, n - i - 1) * a;
  	}
  	ll m, by;
  	cin >> m >> by;
  	ll y = 0;
  	for(ll i = 0; i < m; i++){
  		ll a;
  		cin >> a;
  		y += pow(by, m - i - 1) * a;
  	}
  	if(x < y){
  		cout << "<\n";
  	}
  	else if(x > y){
  		cout << ">\n";
  	}
  	else{
  		cout << "=\n";
  	}
	return 0;
}