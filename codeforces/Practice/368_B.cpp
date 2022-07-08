// Problem: B. Sereja and Suffixes
// Contest: Codeforces - Codeforces Round #215 (Div. 2)
// URL: https://codeforces.com/problemset/problem/368/B
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
  	ll n, m;
  	cin >> n >> m;
  	ll arr[n], brr[n] = {0};
  	map<ll, ll> mp;
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  	}
  	for(ll i = n - 1; i >= 0; i--){
  		mp[arr[i]]++;
  		brr[n - i - 1] = mp.size();
  	}
  	for(ll i = 0; i < m; i++){
  		ll a;
  		cin >> a;
  		cout << brr[n - a] << "\n";
  	}
	return 0;
}