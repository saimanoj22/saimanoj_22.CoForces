// Problem: A. Young Physicist
// Contest: Codeforces - Codeforces Beta Round #63 (Div. 2)
// URL: https://codeforces.com/problemset/problem/69/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	// ll testcases;
	// cin >> testcases;
	// while(testcases--){
// 
  	// }
		ll n;
		cin >> n;
		ll arr[n][3], x = -1, y = -1, z = -1;
		for(ll i = 0; i < n; i++){
			cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
			x += arr[i][0];
			y += arr[i][1];
			z += arr[i][2];
		}
		if(x + 1 == 0 && y + 1 == 0 && z + 1 == 0){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	return 0;
}