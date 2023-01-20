// Problem: A. Extremely Round
// Contest: Codeforces - Educational Codeforces Round 139 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1766/A
// Memory Limit: 512 MB
// Time Limit: 3000 ms
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
		string s = to_string(n);
		ll ans = (s.length() - 1) * 9;
		ll x = s[0] - '0';
		ans += x;
		cout << ans << "\n";
  	}
	return 0;
}