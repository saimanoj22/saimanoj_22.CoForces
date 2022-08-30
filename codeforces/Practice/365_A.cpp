// Problem: A. Good Number
// Contest: Codeforces - Codeforces Round #213 (Div. 2)
// URL: https://codeforces.com/problemset/problem/365/A
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
  	ll n, k;
  	cin >> n >> k;
  	ll count = 0;
  	for(ll i = 0; i < n; i++){
  		string s;
  		cin >> s;
  		map<ll, ll> mp;
  		for(ll j = 0; j < s.length(); j++){
  			ll digit = s[j] - '0';
  			if(digit <= k){
				mp[digit]++;
  			}
  		}
  		if(mp.size() == k + 1){
  			count++;
  		}
  	}
  	cout << count << "\n";
	return 0;
}