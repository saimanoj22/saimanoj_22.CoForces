// Problem: B. Equidistant String
// Contest: Codeforces - Codeforces Round #303 (Div. 2)
// URL: https://codeforces.com/problemset/problem/545/B
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
  	ll count = 0;
  	for(ll i = 0; i < s.length(); i++){
  		if(s[i] != t[i]){
  			count++;
  		}
  	}
  	if(count % 2){
  		cout << "impossible\n";
  	}
  	else{
  		string ans = "";
  		ll temp = 0;
  		for(ll i = 0; i < s.length(); i++){
  			if(s[i] == t[i])ans += s[i];
  			else{
  				if(temp % 2){
  					ans += t[i];
  				}
  				else{
  					ans += s[i];
  				}
  				temp++;
  			}
  		}
  		cout << ans << "\n";
  	}
	return 0;
}