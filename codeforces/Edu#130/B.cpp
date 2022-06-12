// Problem: B. Promo
// Contest: Codeforces - Educational Codeforces Round 130 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1697/problem/B
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
// 
  	// }
  	ll n, q;
  	cin >> n >> q;
  	ll arr[n], brr[n];
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  	}
  	sort(arr, arr+n);
  	
  	ll sum = 0, temp = 0;
  	for(ll i = n - 1; i >= 0; i--){
  		sum += arr[i];
  		brr[temp] = sum;
  		temp++;
  	}
  	
  	while(q--){
  		ll x, y;
  		cin >> x >> y;
  		ll ans = brr[x - 1];
  		y = x - y;
  		ll temp = brr[y - 1];
  		if(y - 1 < 0){
  			temp = 0;
  		}
  		
  		cout << ans - temp << "\n";
  	}
  	
	return 0;
}