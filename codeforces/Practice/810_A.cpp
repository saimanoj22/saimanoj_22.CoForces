// Problem: A. Straight «A»
// Contest: Codeforces - Codeforces Round #415 (Div. 2)
// URL: https://codeforces.com/problemset/problem/810/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	/*ll testcases;
	cin >> testcases;
	while(testcases--){

  	}*/
  	ll n, k;
  	cin >> n >> k;
  	ll arr[n], sum = 0;
  	for(ll i = 0; i < n ; i++){
  		cin >> arr[i];
  		sum += arr[i];
  	}
	for (ll i = 0;; i++) {
	    ll a = 2 * (sum + i * k);
	    ll b = (2 * k - 1) * (i + n);
	
	    if (a >= b) {
	        cout << i;
	        return 0;
	    }
	}
	return 0;
}