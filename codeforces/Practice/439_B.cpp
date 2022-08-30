// Problem: B. Devu, the Dumb Guy
// Contest: Codeforces - Codeforces Round #251 (Div. 2)
// URL: https://codeforces.com/problemset/problem/439/B
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
  	ll n, x;
  	cin >> n >> x;
  	vector<ll> v(n, 0);
  	for(ll i = 0; i < n; i++){
  		cin >> v[i];
  	}
  	sort(v.begin(), v.end());
  	ll sum = 0;
  	for(ll i = 0; i < n; i++){
  		if(x < 1)x = 1;
  		sum += v[i] * x;
  		x--;
  	}
  	cout << sum << "\n";
	return 0;
}