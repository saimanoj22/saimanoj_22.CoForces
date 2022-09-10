// Problem: A. Guest From the Past
// Contest: Codeforces - Codeforces Round #342 (Div. 2)
// URL: https://codeforces.com/problemset/problem/625/A
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
  	if(n < a && n < b){
  		cout << 0 << "\n";
  		return 0;
  	}
  	if(a <= b - c){
  		cout << n / a << "\n";
  		return 0;
  	}
  	ll x = max((n - c), 0LL) / (b - c);
  	n -= x * (b - c);
  	ll y = n / a;
  	cout << x + y << "\n";
	return 0;
}