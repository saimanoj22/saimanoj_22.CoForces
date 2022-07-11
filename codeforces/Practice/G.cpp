// Problem: G. Fall Down
// Contest: Codeforces - Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/G
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
		char arr[n][m];
		for(ll i = 0; i < n; i++){
			for(ll j = 0; j < m; j++){
				cin >> arr[i][j];
			}
		}
		ll last = n - 1;
		for(ll j = 0; j < m; j++){
			last = n - 1;
			for(ll i = n - 1; i >= 0; i--){
				if(arr[i][j] == '.'){
					continue;
				}
				else if(arr[i][j] == 'o'){
					last = i - 1;
				}
				else{
					swap(arr[i][j], arr[last][j]);
					last--;
				}
			}
		}
		for(ll i = 0; i < n; i++){
			for(ll j = 0; j < m; j++){
				cout << arr[i][j];
			}
			cout << "\n";
		}
  	}
	return 0;
}