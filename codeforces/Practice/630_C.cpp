// Problem: C. Lucky Numbers
// Contest: Codeforces - Experimental Educational Round: VolBIT Formulas Blitz
// URL: https://codeforces.com/problemset/problem/630/C
// Memory Limit: 64 MB
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
  	ll n;
  	cin >> n;
  	ll ans = 1;
  	for(ll i = 1; i <= n; i++){
  		ans *= 2;
  	}
	ll num = ans + ans - 2;
	cout << num << "\n";
	return 0;
}