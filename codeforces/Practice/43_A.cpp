// Problem: A. Football
// Contest: Codeforces - Codeforces Beta Round #42 (Div. 2)
// URL: https://codeforces.com/problemset/problem/43/A
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
	map<string, ll> mp;
	for(ll i = 0; i < n; i++){
		string s;
		cin >> s;
		mp[s]++;
	}
	ll maxi = 0;
	string ans;
	for(auto m : mp){
		if(m.second > maxi){
			maxi = m.second;
			ans = m.first;
		}
	}
	cout << ans << "\n";
	return 0;
}