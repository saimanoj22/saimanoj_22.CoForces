// Problem: B. Robots
// Contest: Codeforces - Educational Codeforces Round 128 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1680/problem/B
// Memory Limit: 512 MB
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
		ll n , m;
		cin >> n >> m;
		char arr[n][m];
		ll imin = INT_MAX, iminj = 0, jmin = INT_MAX, jmini = 0;
		for(ll i = 0; i < n; i++){
			for(ll j = 0; j < m; j++){
				cin >> arr[i][j];
				if(arr[i][j] == 'R'){
					if(i < imin){
						imin = i;
						iminj = j;
					}
					if(j < jmin){
						jmin = j;
						jmini = i;
					}
				}
			}
		}
		if(imin == jmini && jmin == iminj){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
  	}
	return 0;
}