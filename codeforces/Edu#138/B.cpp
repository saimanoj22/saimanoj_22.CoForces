// Problem: B. Death's Blessing
// Contest: Codeforces - Educational Codeforces Round 138 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1749/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n;
		cin >> n;
		ll sum = 0;
		vector<ll> h(n), b(n);
		for(ll i = 0; i < n; i++){
			cin >> h[i];
			sum += h[i];
		}
		for(ll i = 0; i < n; i++){
			cin >> b[i];
			sum += b[i];
		}
		sum -= *max_element(b.begin(), b.end());
		cout << sum << "\n";
  	}
	return 0;
}