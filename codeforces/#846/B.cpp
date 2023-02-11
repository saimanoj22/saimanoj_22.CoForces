// Problem: B. GCD Partition
// Contest: Codeforces - Codeforces Round #846 (Div. 2)
// URL: https://codeforces.com/contest/1780/problem/B
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
		
		vector<ll> pref(n, 0);
		pref[0] = v[0];
		for(ll i = 1; i < n; i++){
			pref[i] = v[i] + pref[i - 1];
		}
		
		vector<ll> suff(n, 0);
		for(ll i = n - 1; i >= 0; i--){
			if(i == n - 1){
				suff[i] = v[i];
			}
			else suff[i] = v[i] + suff[i + 1];
		}
		
		ll maxi = 0;
		for(ll i = 0; i + 1 < n; i++){
			maxi = max(maxi, __gcd(pref[i], suff[i + 1]));
		}
		cout << maxi << "\n";
  	}
	return 0;
}