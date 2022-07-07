// Problem: B. Fence
// Contest: Codeforces - Codeforces Round #211 (Div. 2)
// URL: https://codeforces.com/problemset/problem/363/B
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
  	ll arr[n];
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  	}
  	ll min = 1e9, index = 0, sum = 0;
  	for(ll i = 0; i < k; i++){
  		sum += arr[i];
  	}
	if(min > sum){
		min = sum;
		index = 0;
	}
	if(n > 1){
	  	for(ll i = 1; i <= n - k; i++){
	  		sum -= arr[i - 1];
	  		sum += arr[i + k - 1];
	  		if(min > sum){
	  			min = sum;
	  			index = i;
	  		}
	  	}
	}
  	cout << index + 1 << "\n";
	return 0;
}