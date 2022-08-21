// Problem: B. Mathematical Circus
// Contest: Codeforces - Codeforces Round #814 (Div. 2)
// URL: https://codeforces.com/contest/1719/problem/B
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
		ll n, k;
		cin >> n >> k;
		k = k % 4;
		if(k == 0){
			cout << "NO\n";
		}
		else{
			cout << "YES\n";
			vector<pair<ll, ll>> v;
			for(ll i = 1; i <= n; i += 2){
				if(i + 1 <= n)v.push_back({i, i + 1});
			}
			if(k == 2){
				for(ll i = 0; i < v.size(); i++){
					ll a = v[i].first, b = v[i].second;
					if((a + k) * b % 4 != 0){
						v[i].first = b;
						v[i].second = a;
					}
				}
			}
			for(ll i = 0; i < v.size(); i++){
				cout << v[i].first << " " << v[i].second << "\n";
			}
		}
  	}
	return 0;
} 