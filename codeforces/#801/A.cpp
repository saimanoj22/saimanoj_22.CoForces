// Problem: A. Subrectangle Guess
// Contest: Codeforces - Codeforces Round #801 (Div. 2) and EPIC Institute of Technology Round
// URL: https://codeforces.com/contest/1695/problem/A
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
		ll arr[n][m];
		for(ll i = 0; i < n; i++){
			for(ll j = 0; j < m; j++){
				cin >> arr[i][j];
			}
		}
		ll maxi = -1e9, x = 0, y = 0;
		for(ll i = 0; i < n; i++){
			for(ll j = 0; j < m; j++){
				if(maxi < arr[i][j]){
					maxi = arr[i][j];
					x = i;
					y = j;
				}
			}
		}
		ll temp = max(x + 1, n - x);
		ll temp1 = max(y + 1, m - y);
		cout << temp * temp1 << "\n";
  	}
	return 0;
}