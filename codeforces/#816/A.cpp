// Problem: A. Crossmarket
// Contest: Codeforces - Codeforces Round #816 (Div. 2)
// URL: https://codeforces.com/contest/1715/problem/A
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
		if(n == 1 && m == 1){
			cout << 0 << "\n";
		}
		else if(n <= m){
			ll x = n / 2;
			ll y;
			if(n % 2){
				y = x;
			}
			else{
				y = abs(x - 1);
			}
			ll ans = x + x + y + y + m;
			cout << ans << "\n";
		}
		else if(n > m){
			ll x = m / 2;
			ll y;
			if(m % 2){
				y = x;
			}
			else y = abs(x - 1);
			ll ans = x + x + y + y + n;
			cout << ans << "\n";
		}
  	}
	return 0;
}