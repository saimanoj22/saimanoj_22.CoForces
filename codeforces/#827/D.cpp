// Problem: D. Coprime
// Contest: Codeforces - Codeforces Round #827 (Div. 4)
// URL: https://codeforces.com/contest/1742/problem/D
// Memory Limit: 256 MB
// Time Limit: 3000 ms
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
		map<ll, ll> mp;
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			mp[v[i]] = i + 1;
		}
		
		ll maxi = -1;
		for(ll i = 1000; i >= 1; i--){
			for(ll j = 1000; j >= 1; j--){
				if(__gcd(i, j) == 1){
					if(mp[i] > 0 && mp[j] > 0){
						maxi = max(maxi, (mp[i] + mp[j]));
					}
				}
			}
		}
		cout << maxi << "\n";
  	}
	return 0;
}