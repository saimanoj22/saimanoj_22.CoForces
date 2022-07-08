// Problem: A. Cut Ribbon
// Contest: Codeforces - Codeforces Round #119 (Div. 2)
// URL: http://codeforces.com/problemset/problem/189/A
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
  	ll n, a, b, c;
  	cin >> n >> a >> b >> c;
  	ll maxi = 0;
  	for(ll i = 0; i <= n; i += a){
  		for(ll j = 0; j <= n; j += b){
  			ll temp = i + j;
  			if((n - temp) % c == 0 && (n - temp) >= 0){
  				ll ans = (i / a) + (j / b) + ((n - temp) / c);
  				if(maxi < ans){
  					maxi = ans;
  				}
  			}
  		}
  	}
  	cout << maxi << "\n";
	return 0;
}