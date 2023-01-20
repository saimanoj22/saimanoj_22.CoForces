// Problem: B. Jumbo Extra Cheese 2
// Contest: Codeforces - Codeforces Round #831 (Div. 1 + Div. 2)
// URL: https://codeforces.com/contest/1740/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n;
		cin >> n;
		ll sum = 0, maxi = 0;
		for(ll i = 0; i < n; i++){
			ll l, b;
			cin >> l >> b;
			sum += min(l , b);
			ll x = max(l, b);
			maxi = max(maxi, x);
		}
		cout << (sum * 2) + maxi + maxi << "\n";
  	}
	return 0;
}