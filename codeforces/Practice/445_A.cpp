// Problem: A. DZY Loves Chessboard
// Contest: Codeforces - Codeforces Round #254 (Div. 2)
// URL: https://codeforces.com/problemset/problem/445/A
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
  	ll n , m;
  	cin >> n >> m;
  	char arr[n][m];
  	for(ll i = 0; i < n; i++){
  		for(ll j = 0; j < m; j++){
  			cin >> arr[i][j];
  		}
  	}
  	for(ll i = 0; i < n; i++){
  		for(ll j = 0; j < m; j++){
  			if(arr[i][j] == '.'){
				if(i % 2 == j % 2){
					arr[i][j] = 'B';
				}
				else{
					arr[i][j] = 'W';
				}
  			}
  			cout << arr[i][j] << "";
  		}
  		cout << "\n";
  	}
	return 0;
}