// Problem: B. Ohana Cleans Up
// Contest: Codeforces - Codeforces Round #309 (Div. 2)
// URL: https://codeforces.com/problemset/problem/554/B
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
  	char arr[n][n];
  	map<string, ll> mp;
  	for(ll i = 0; i < n; i++){
  		string s = "";
  		for(ll j = 0; j < n; j++){
  			cin >> arr[i][j];
			s += arr[i][j];
  		}
  		mp[s]++;
  	}
  	ll maxi = 0;
  	for(auto m : mp){
  		maxi = max(maxi, m.second);
  	}
  	cout << maxi << "\n";
	return 0;
}