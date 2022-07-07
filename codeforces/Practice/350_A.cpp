// Problem: A. TL
// Contest: Codeforces - Codeforces Round #203 (Div. 2)
// URL: https://codeforces.com/problemset/problem/350/A
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
  	ll n, m;
  	cin >> n >> m;
  	ll arr[n], brr[m], a = 1e9, b = 0, c = 1e9;
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  		a = min(a, arr[i]);
  		b = max(b, arr[i]);
  	}
  	for(ll i = 0; i < m; i++){
  		cin >> brr[i];
  		c = min(c, brr[i]);
  	}
  	if(max(2*a, b) < c){
  		cout << max(2*a, b) << "\n";
  	}
  	else cout << -1 << "\n";
	return 0;
}