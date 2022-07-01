// Problem: B. Pashmak and Flowers
// Contest: Codeforces - Codeforces Round #261 (Div. 2)
// URL: https://codeforces.com/problemset/problem/459/B
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
  	ll n;
  	cin >> n;
  	ll arr[n];
  	map<ll, ll> mp;
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  		mp[arr[i]]++;
  	}
  	sort(arr, arr+n);
  	if(arr[n - 1] - arr[0] == 0){
  		ll temp = n - 1;
  		cout << arr[n - 1] - arr[0] << " " << (temp * (temp + 1)) / 2 << "\n";
  	}
  	else{
  		cout << arr[n - 1] - arr[0] << " " << (mp[arr[n - 1]] * mp[arr[0]]) << "\n";
  	}
	return 0;
}