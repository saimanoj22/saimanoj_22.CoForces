// Problem: B. Combination
// Contest: Codeforces - Codeforces Round #109 (Div. 2)
// URL: https://codeforces.com/problemset/problem/155/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

bool comp(pair<ll, ll> a, pair<ll, ll> b){
	if(a.first > b.first){
		return true;
	}
	else if(a.first == b.first){
		if(a.second > b.second)return true;
		else return false;
	}
	return false;
}

int main(){
	// ll testcases;
	// cin >> testcases;
	// while(testcases--){
  	// }
  	ll n ;
  	cin >> n;
  	vector<pair<ll, ll>> v;
  	for(ll i = 0; i < n; i++){
  		ll a, b;
  		cin >> a >> b;
  		v.push_back({b, a});
  	}
  	sort(v.begin(), v.end(), comp);
  	// for(ll i = 0; i < v.size(); i++){
  		// cout << v[i].first << " " << v[i].second << "\n";
  	// }
  	ll turns = v[0].first;
  	ll ans = v[0].second;
  	ll i = 1;
  	while(turns > 0 && i < n){
  		ans += v[i].second;
  		turns--;
  		turns += v[i].first;
  		i++;
  	}
  	cout << ans << "\n";
	return 0;
}