// Problem: A. Bestie
// Contest: Codeforces - Codeforces Round #830 (Div. 2)
// URL: https://codeforces.com/contest/1732/problem/A
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
		vector<ll> v(n);
		ll g;
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			if(i == 0)g = v[0];
			else g = __gcd(g, v[i]);
		}
		if(g == 1)cout << 0 << "\n";
		else{
			if(__gcd(g, n) == 1)cout << 1 << "\n";
			else if(__gcd(g, n - 1) == 1)cout << 2 << "\n";
			else cout << 3 << "\n";
		}
  	}
	return 0;
}