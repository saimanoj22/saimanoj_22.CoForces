// Problem: B. Array Recovery
// Contest: Codeforces - Educational Codeforces Round 136 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1739/problem/B
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
		vector<ll> v(n);
		for(ll i = 0; i < n; i++){
			cin >> v[i];
		}
		vector<ll> ans(n, 0);
		bool flag = true;
		ans[0] = v[0];
		for(ll i = 1; i < n; i++){
			ll x = ans[i - 1] + v[i];
			ll y = ans[i - 1] - v[i];
			// cout << x << " " << y << "\n";
			if(x >= 0 && y >= 0 && x != y){
				flag = false;
			}
			ans[i] = ans[i - 1] + v[i];
		}
		if(flag == false){
			cout << -1 << "\n";
		}
		else{
			for(ll i = 0; i < n; i++){
				cout << ans[i] << " ";
			}
			cout << "\n";
		}
  	}
	return 0;
}