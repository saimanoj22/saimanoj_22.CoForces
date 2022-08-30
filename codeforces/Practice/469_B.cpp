// Problem: B. Chat Online
// Contest: Codeforces - Codeforces Round #268 (Div. 2)
// URL: https://codeforces.com/problemset/problem/469/B
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
  	ll p, q, l, r;
  	cin >> p >> q >> l >> r;
  	vector<pair<ll, ll>> v;
  	for(ll i = 0; i < p; i++){
  		ll a , b;
  		cin >> a >> b;
  		v.push_back({a, b});
  	}
  	ll interval = r - l + 1;
  	vector<ll> ans(interval, 0);
  	for(ll i = 0; i < q; i++){
  		ll a, b;
  		cin >> a >> b;
  		for(ll j = l; j <= r; j++){
  			ll tempa = a, tempb = b;
  			tempa += j;
  			tempb += j;
  			// cout << tempa << " " << tempb << "\n";
  			for(ll k = 0; k < v.size(); k++){
				ll left = v[k].first, right = v[k].second;
				if((tempa < left && tempb < left) || (tempa > right && tempb > right)){
					
				}
				else{
					ans[j - l]++;
				}
  			}
  		}
  	}
  	ll count = 0;
	for(ll i = 0; i < ans.size(); i++){
		if(ans[i] != 0)count++;
	}
	cout << count << "\n";
	return 0;
}