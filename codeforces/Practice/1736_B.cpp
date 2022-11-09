// Problem: B. Playing with GCD
// Contest: Codeforces - Codeforces Round #825 (Div. 2)
// URL: https://codeforces.com/contest/1736/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
		vector<ll> v(n + 2, 1), w(n + 2, 1);
		for(ll i = 1; i <= n; i++){
			cin >> v[i];
		}
		for(ll i = 1; i <= n + 1; i++){
			w[i] = lcm(v[i], v[i - 1]);
		}
		bool flag = false;
		for(ll i = 1; i <= n; i++){
			if(v[i] != __gcd(w[i], w[i + 1])){
				flag = true;
				break;
			}
		}
		if(flag)cout << "NO\n";
		else cout << "YES\n";
  	}
	return 0;
}