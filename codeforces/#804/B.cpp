// Problem: B. Almost Ternary Matrix
// Contest: Codeforces - Codeforces Round #804 (Div. 2)
// URL: https://codeforces.com/contest/1699/problem/B
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
				if(i == 0){
					if(j % 2 == 0){
						if((j / 2) % 2 == 0){
							arr[i][j] = 1;
						}
						else arr[i][j] = 0;
					}
					else{
						arr[i][j] = 1 ^ arr[i][j - 1];
					}
				}
				else if(i % 2 != 0){
					arr[i][j] = 1 ^ arr[i - 1][j];
				}
				else if(i % 2 == 0){
					arr[i][j] = arr[i - 1][j];
				}
				cout << arr[i][j] << " ";
			}
			cout << "\n";
		}
  	}
	return 0;
}