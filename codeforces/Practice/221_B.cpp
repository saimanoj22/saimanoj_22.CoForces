// Problem: B. Little Elephant and Numbers
// Contest: Codeforces - Codeforces Round #136 (Div. 2)
// URL: https://codeforces.com/problemset/problem/221/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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

  	string s = to_string(n);
  	map<ll, ll> mp;
  	for(ll i = 0; i < s.length(); i++){
  		mp[s[i] - '0']++;
  	}
  	
  	ll ans = 0;
  	for(ll i = 1; i <= sqrt(n); i++){
  		if(n % i == 0 && i != sqrt(n)){
  			string a = to_string(i);
  			ll temp = n / i;
  			string b = to_string(temp);
  			for(ll i = 0; i < a.length(); i++){
  				if(mp[a[i] - '0'] > 0){
  					ans++;
  					break;
  				}
  			}
  			for(ll i = 0; i < b.length(); i++){
  				if(mp[b[i] - '0'] > 0){
  					ans++;
  					break;
  				}
  			}
  		}
  		else if(i == sqrt(n)){
  			string a = to_string(i);
  			for(ll i = 0; i < a.length(); i++){
  				if(mp[a[i] - '0'] > 0){
  					ans++;
  					break;
  				}
  			}
  		}
  	}
  	cout << ans << "\n";
	return 0;
}