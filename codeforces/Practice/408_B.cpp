// Problem: B. Garland
// Contest: Codeforces - Codeforces Round #239 (Div. 2)
// URL: https://codeforces.com/problemset/problem/408/B
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
  	string s, t;
  	cin >> s >> t;
  	map<char, ll> mp, gp;
  	for(ll i = 0; i < s.length(); i++){
  		mp[s[i]]++;
  	}
  	ll flag = 0;
  	for(ll i = 0; i < t.length(); i++){
  		if(mp[t[i]] == 0){
  			flag = 1;
  			break;
  		}
  		else{
  			gp[t[i]]++;
  		}
  	}
  	if(flag){
  		cout << -1 << "\n";
  	}
  	else{
  		ll ans = 0;
		for(auto m : gp){
			if(mp[m.first] >= gp[m.first]){
				ans += gp[m.first];
			}
			else{
				ans += mp[m.first];
			}
		}
  	  	cout << ans << "\n";
  	}
	return 0;
}