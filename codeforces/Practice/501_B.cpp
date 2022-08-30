// Problem: B. Misha and Changing Handles
// Contest: Codeforces - Codeforces Round #285 (Div. 2)
// URL: https://codeforces.com/problemset/problem/501/B
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
  	vector<pair<string, string>> v;
  	for(ll i = 0; i < n; i++){
  		string s, t;
  		cin >> s >> t;
  		ll flag = 0;
  		for(ll j = 0; j < v.size(); j++){
  			if(v[j].second == s){
  				v[j].second = t;
  				flag = 1;
  			}
  		}
  		if(flag == 0){
  			v.push_back({s, t});
  		}
  	}
  	cout << v.size() << "\n";
  	for(ll i = 0; i < v.size(); i++){
  		cout << v[i].first << " " << v[i].second << "\n";
  	}
	return 0;
}