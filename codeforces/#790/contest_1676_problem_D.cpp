// Problem: D. X-Sum
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/contest/1676/problem/D
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
		ll arr[n][m];
		for(ll i = 0; i < n; i++){
			for(ll j = 0; j < m; j++){
				cin >> arr[i][j];
			}
		}
		ll max = 0;
		for(ll i = 0; i < n; i++){
			for(ll j = 0; j < m; j++){
				ll sum = 0;
				ll a = i, b = j;
				while(a >= 0 && b >= 0){
					sum += arr[a][b];
					a--;b--;
				}
				a = i, b = j;
				while(a >= 0 && b <= m - 1){
					sum += arr[a][b];
					a--;b++;
				}
				a = i, b = j;
				while(a <= n - 1 && b >= 0){
					sum += arr[a][b];
					a++;b--;
				}
				a = i, b = j;
				while(a <= n - 1 && b <= m - 1){
					sum += arr[a][b];
					a++;b++;
				}
				a = i, b = j;
				sum -= 3 * arr[a][b];
				if(max < sum)max = sum;
			}
		}
		cout << max << "\n";
  	}
	return 0;
}