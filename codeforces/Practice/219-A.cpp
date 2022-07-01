// Problem: A. k-String
// Contest: Codeforces - Codeforces Round #135 (Div. 2)
// URL: https://codeforces.com/problemset/problem/219/A
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
  	ll k;
  	cin >> k;
  	string s;
  	cin >> s;
  	map<char, ll> mp;
  	for(ll i = 0; i < s.length(); i++){
  		mp[s[i]]++;
  	}
  	ll flag = 0;
  	string ans = "";
  	for(auto m: mp){
  		if(m.second % k != 0){
  			flag = 1;
  			break;
  		}
  		for(ll i = 0; i < m.second / k; i++){
  			ans += m.first;
  		}
  	}
  	if(flag == 1){
  		cout << -1 << "\n";
  	}
  	else{
  		for(ll i = 0; i < k; i++){
  			cout << ans;
  		}
  		cout << "\n";
  	}

	return 0;
}