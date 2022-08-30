// Problem: A. Lala Land and Apple Trees
// Contest: Codeforces - Codeforces Round #312 (Div. 2)
// URL: https://codeforces.com/problemset/problem/558/A
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
  	ll n;
  	cin >> n;
  	vector<pair<ll, ll>> ne, po;
  	for(ll i = 0; i < n; i++){
  		ll x, a;
  		cin >> x >> a;
  		if(x < 0){
  			ne.push_back({x, a});
  		}
  		else{
  			po.push_back({x, a});
  		}
  	}
  	sort(po.begin(), po.end());
  	sort(ne.begin(), ne.end(), greater<>());
  	ll ans = 0;
  	if(po.size() > ne.size()){
  		for(ll i = 0; i < ne.size(); i++){
  			ans += po[i].second;
  			ans += ne[i].second;
  		}
  		ans += po[ne.size()].second;
  	}
  	else if(ne.size() > po.size()){
  		for(ll i = 0; i < po.size(); i++){
  			ans += ne[i].second;
  			ans += po[i].second;
  		}
  		ans += ne[po.size()].second;
  	}
  	else{
  		for(ll i = 0; i < po.size(); i++){
  			ans += po[i].second;
  			ans += ne[i].second;
  		}
  	}
  	cout << ans << "\n";
	return 0;
}