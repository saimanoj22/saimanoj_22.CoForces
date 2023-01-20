// Problem: B. Notepad#
// Contest: Codeforces - Educational Codeforces Round 139 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1766/problem/B
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n;
		cin >> n;
		string s;
		cin >> s;
		map<string, ll> mp;
		ll flag = 0;
		for(ll i = 0; i < s.length() - 1; i++){
			string temp = s.substr(i, 2);
			if(!mp[temp]){
				mp[temp] = i + 1;
			}
			else if(mp[temp] && i - mp[temp] + 1 > 1){
				flag = 1;
				break;
			}
		}
		if(flag)cout << "YES\n";
		else cout << "NO\n";
  	}
	return 0;
}