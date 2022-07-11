// Problem: B. Sale
// Contest: Codeforces - Codeforces Beta Round #34 (Div. 2)
// URL: https://codeforces.com/problemset/problem/34/B
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
  	ll n, k;
  	cin >> n >> k;
  	ll arr[n];
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  	}
  	sort(arr, arr + n);
  	ll sum = 0;
  	for(ll i = 0; i < k; i++){
  		if(arr[i] < 0)sum -= arr[i];
  	}
  	cout << sum << "\n";
	return 0;
}