// Problem: A. The Wall
// Contest: Codeforces - Codeforces Round #198 (Div. 2)
// URL: https://codeforces.com/problemset/problem/340/A
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
  	ll x, y, a, b;
  	cin >> x >> y >> a >> b;
  	ll lcmm = (x * y) / __gcd(x, y);
  	ll first = -1, last = -1;
  	for(ll i = a; i <= b; i++){
  		if(i % lcmm == 0){
  			first = i;
  			break;
  		}
  	}
  	for(ll i = b; i >= a; i--){
  		if(i % lcmm == 0){
  			last = i;
  			break;
  		}
  	}
	if(first == -1 && last == -1){
		cout << 0 << "\n";
	}
	else{
		ll diff = abs(first - last);
		ll ans = diff / lcmm;
		cout << ans + 1 << "\n";
	}
	return 0;
}