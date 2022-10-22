// Problem: A. Make A Equal to B
// Contest: Codeforces - Codeforces Round #825 (Div. 2)
// URL: https://codeforces.com/contest/1736/problem/A
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
		vector<ll> v(n), w(n);
		ll one = 0, zero = 0;
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			if(v[i] == 1)one++;
			else zero++;
		}
		ll onee = 0, zeroo = 0, count = 0;
		for(ll i = 0; i < n; i++){
			cin >> w[i];
			if(w[i] == 1)onee++;
			else zeroo++;
			if(v[i] != w[i])count++;
		}
		ll a = abs(one - onee);
		ll b = abs(zero - zeroo);
		ll ans1 = min(a, b) + 1;
		cout << min(count, ans1) << "\n";
  	}
	return 0;
}