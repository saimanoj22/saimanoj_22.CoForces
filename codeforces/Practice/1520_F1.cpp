// Problem: F1. Guess the K-th Zero (Easy version)
// Contest: Codeforces - Codeforces Round #719 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1520/F1
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	// ll testcases;
	// cin >> testcases;
	// while(testcases--){
  	// }
		ll n, t, k;
		cin >> n >> t >> k;
		ll l = 1;
		ll r = n;
		ll mid, ans, ones;
		while(l <= r){
			mid = (l + r) / 2;
			cout << "? 1 " << mid << "\n";
			cout << flush;
			cin >> ones;
			ll zeros = mid - ones;
			if(zeros >= k){
				r = mid - 1;
				ans = min(ans, mid);
			}
			else l = mid + 1;
		}
		cout << "! " << ans << "\n";
		cout << flush;
	return 0;
}