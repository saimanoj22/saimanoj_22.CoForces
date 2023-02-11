// Problem: B. Emordnilap
// Contest: Codeforces - Codeforces Round #845 (Div. 2) and ByteRace 2023
// URL: https://codeforces.com/contest/1777/problem/B
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
		if(n == 1)cout << 0 << "\n";
		else{
			ll ans = 1;
			for(ll i = 1; i <= n; i++){
				ans *= i;
				ans %= 1000000007;
			}
			ans *= (n * (n - 1)) % 1000000007;
			ans %= 1000000007;
			cout << ans << "\n";
		}
  	}
	return 0;
}