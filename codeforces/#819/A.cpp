// Problem: A. Mainak and Array
// Contest: Codeforces - Codeforces Round #819 (Div. 1 + Div. 2) and Grimoire of Code Annual Contest 2022
// URL: https://codeforces.com/contest/1726/problem/A
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
		for(ll i = 0; i < n; i++){
			cin >> v[i];
		}

		ll maxi = -1e9;
		for(ll i = 0; i < n; i++){
			maxi = max(maxi, v[(i - 1 + n) % n] - v[i]);
		}
		for(ll i = 1; i < n; i++){
			maxi = max(maxi, (v[i] - v[0]));
		}
		for(ll i = 0; i < n - 1; i++){
			maxi = max(maxi, (v[n - 1] - v[i]));
		}
		cout << maxi << "\n";
  	}
	return 0;
}