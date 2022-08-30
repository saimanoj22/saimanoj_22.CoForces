// Problem: A. Elections
// Contest: Codeforces - Codeforces Round #316 (Div. 2)
// URL: https://codeforces.com/problemset/problem/570/A
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
  	vector<ll> v;
  	map<ll, ll> mp;
  	for(ll i = 0; i < m; i++){
  		ll maxi = 0, index = -1;
  		for(ll j = 0; j < n; j++){
  			ll a;
  			cin >> a;
  			if(maxi < a){
  				maxi = a;
  				index = j + 1;
  			}
  		}
  		if(index == -1)index = 1;
  		mp[index]++;
  		v.push_back(index);
  	}
  	ll index = -1, maxi = 0;
  	for(auto m : mp){
  		if(maxi < m.second){
  			maxi = m.second;
  			index = m.first;
  		}
  	}
  	for(ll i = 0; i < v.size(); i++){
		if(v[i] == index){
			cout << v[i] << "\n";
			break;
		}
  	}
	return 0;
}