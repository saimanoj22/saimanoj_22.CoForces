// Problem: A. Joey Takes Money
// Contest: Codeforces - Codeforces Round #841 (Div. 2) and Divide by Zero 2022
// URL: https://codeforces.com/contest/1731/problem/A
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
		vector<ll> v(n);
		ll ans = 1;
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			ans *= v[i];
		}
		ans += n - 1;
		cout << 2022 * ans << "\n";
  	}
	return 0;
}