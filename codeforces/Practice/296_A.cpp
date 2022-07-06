// Problem: A. Yaroslav and Permutations
// Contest: Codeforces - Codeforces Round #179 (Div. 2)
// URL: https://codeforces.com/problemset/problem/296/A
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
  	ll arr[n];
  	map<ll, ll> mp;
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  		mp[arr[i]]++;
  	}
  	ll max = -1;
  	for(auto m : mp){
  		if(max < m.second){
  			max = m.second;
  		}
  	}
  	ll temp = n / 2;
  	if(n % 2 != 0)temp++;
  	if(max <= temp){
  		cout << "YES\n";
  	}
  	else cout << "NO\n";
	return 0;
}