// Problem: A. Cowardly Rooks
// Contest: Codeforces - Educational Codeforces Round 138 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1749/problem/A
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
		ll n, m;
		cin >> n >> m;
		vector<ll> row(n + 1), column(n + 1);
		for(ll i = 0; i < m; i++){
			ll x, y;
			cin >> x >> y;
			row[x] = 1;
			column[y] = 1;
		}
		bool flag = false;
		for(ll i = 1; i <= n; i++){
			if(row[i] == 0 || column[i] == 0)flag = true;
		}
		if(flag)cout << "YES\n";
		else cout << "NO\n";
  	}
	return 0;
}