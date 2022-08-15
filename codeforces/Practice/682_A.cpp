// Problem: A. Alyona and Numbers
// Contest: Codeforces - Codeforces Round #358 (Div. 2)
// URL: https://codeforces.com/problemset/problem/682/A
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
  	map<ll, ll> mp;
  	
  	for(ll i = 1; i <= m; i++){
  		ll temp = i % 5;
		mp[temp]++;
  	}
  	ll sum = 0;
  	for(ll i = 1; i <= n; i++){
  		ll temp = i % 5;
  		if(temp == 0)sum += mp[0];
  		else sum += mp[5 - temp];
  	}
  	cout << sum << "\n";
	return 0;
}