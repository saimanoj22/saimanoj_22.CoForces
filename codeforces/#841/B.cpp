// Problem: B. Kill Demodogs
// Contest: Codeforces - Codeforces Round #841 (Div. 2) and Divide by Zero 2022
// URL: https://codeforces.com/contest/1731/problem/B
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
		ll ans = (((n - 1) * (2 * n - 1) * n) / 3) + ((n * (n - 1)) / 2) + (n * n);
		ans %= 1000000007;
		ans *= 2022;
		ans %= 1000000007;
		if(ans < 0){
			ans = 1000000007 + ans;
		}
		cout << ans << "\n";
  	}
	return 0;
}