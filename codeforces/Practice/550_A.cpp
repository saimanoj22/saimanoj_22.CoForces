// Problem: A. Two Substrings
// Contest: Codeforces - Codeforces Round #306 (Div. 2)
// URL: https://codeforces.com/problemset/problem/550/A
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
  	string s;
  	cin >> s;
  	map<ll, ll> mp, mp1;
  	bool ab = false, ba = false, ans = false;;
  	for(ll i = 0; i < s.length() - 1; i++){
  		if(s[i] == 'A' && s[i + 1] == 'B' && !ab){
  			i += 2;
  			ab = true;
  		}
  		if(ab && s[i] == 'B' && s[i + 1] == 'A'){
  			ans = true;
  		}
  	}
  	for(ll i = 0; i < s.length() - 1; i++){
  		if(s[i] == 'B' && s[i + 1] == 'A' && !ba){
  			i += 2;
  			ba = true;
  		}
  		if(ba && s[i] == 'A' && s[i + 1] == 'B'){
  			ans = true;
  		}
  	}

	if(ans)cout << "YES\n";
	else cout << "NO\n";
	return 0;
}