// Problem: C. Where's the Bishop?
// Contest: Codeforces - Codeforces Round #799 (Div. 4)
// URL: https://codeforces.com/contest/1692/problem/C
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
		char arr[8][8];
		for(ll i = 0; i < 8; i++){
			for(ll j = 0; j < 8; j++){
				cin >> arr[i][j];
			}
		}
		ll ansa = -1, ansb = -1;
		for(ll i = 0; i < 8; i++){
			for(ll j = 0; j < 8; j++){
				if(arr[i - 1][j - 1] == '#' && arr[i - 1][j + 1] == '#' && arr[i + 1][j - 1] == '#' && arr[i + 1][j + 1] == '#'){
					ansa = i + 1;
					ansb = j + 1;
					break;
				}
				if(ansa != 1 && ansb != -1)break;
			}
		}
		cout << ansa << " " << ansb << "\n";
  	}
	return 0;
}