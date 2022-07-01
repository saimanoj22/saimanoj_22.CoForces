// Problem: A. Jzzhu and Children
// Contest: Codeforces - Codeforces Round #257 (Div. 2)
// URL: https://codeforces.com/problemset/problem/450/A
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
		ll n, m;
		cin >> n >> m;
		ll arr[n];
		ll max = 0, ans = 0;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			ll temp = arr[i] / m;
			if(arr[i] % m != 0)temp++;
			if(max <= temp){
				max = temp;
				ans = i + 1;
			}
		}
		cout << ans << "\n";
	return 0;
}