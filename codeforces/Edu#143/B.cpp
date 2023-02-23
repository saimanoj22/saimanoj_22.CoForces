// Problem: B. Ideal Point
// Contest: Codeforces - Educational Codeforces Round 143 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1795/problem/B
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
		ll n, k;
		cin >> n >> k;
		// vector<pair<ll, ll>> v;
		ll x = 0, y = 0;
		bool flag = false;
		for(ll i = 0; i < n; i++){
			ll a, b;
			cin >> a >> b;
			// v.push_back({a, b});
			if(a == k && b == k)flag = true;
			else{
				if(a == k)x++;
				if(b == k)y++;
			}
		}
		if(flag){
			cout << "YES\n";
		}
		else{
			if(x > 0 && y > 0)cout << "YES\n";
			else cout << "NO\n";
		}
		
		
  	}
	return 0;
}