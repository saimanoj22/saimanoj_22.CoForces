// Problem: E. Counting Rectangles
// Contest: Codeforces - Codeforces Round #817 (Div. 4)
// URL: https://codeforces.com/contest/1722/problem/E
// Memory Limit: 256 MB
// Time Limit: 6000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n, q;
		cin >> n >> q;
		ll arr[1005][1005], pref[1005][1005];
		for(ll i = 0; i <= 1001; i++){
			for(ll j = 0; j <= 1001; j++){
				arr[i][j] = 0;
				pref[i][j] = 0;
			}
		}
		for(ll i = 0; i < n; i++){
			ll h, w;
			cin >> h >> w;
			arr[h][w] += h * w;
		}
		for(ll i = 1; i <= 1000; i++){
			for(ll j = 1; j <= 1000; j++){
				pref[i][j] = pref[i][j - 1] + pref[i - 1][j] - pref[i - 1][j - 1] + arr[i][j];
			}
		}
		for(ll i = 0; i < q; i++){
			ll hs, ws, hb, wb;
			cin >> hs >> ws >> hb >> wb;
			cout << (pref[hs][ws] - pref[hb - 1][ws] - pref[hs][wb - 1] + pref[hb - 1][wb - 1]) << "\n";
		}
  	}
	return 0;
}