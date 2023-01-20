// Problem: A. Koxia and Whiteboards
// Contest: Codeforces - Good Bye 2022: 2023 is NEAR
// URL: https://codeforces.com/contest/1770/problem/A
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
		ll n, m;
		cin >> n >> m;
		vector<ll> v(n + m - 1);
		for(ll i = 0; i < n + m - 1; i++)cin >> v[i];
		sort(v.begin(), v.end());
		ll a;
		cin >> a;
		v.push_back(a);
		ll sum = 0;
		for(ll i = n + m - 1; i >= m; i--){
			sum += v[i];
		}
		cout << sum << "\n";
  	}
	return 0;
}