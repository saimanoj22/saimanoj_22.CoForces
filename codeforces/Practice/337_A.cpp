// Problem: A. Puzzles
// Contest: Codeforces - Codeforces Round #196 (Div. 2)
// URL: https://codeforces.com/problemset/problem/337/A
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
  	ll arr[m];
  	for(ll i = 0; i < m; i++){
  		cin >> arr[i];
  	}
  	sort(arr, arr + m);
  	ll min = 1e9;
  	for(ll i = n - 1; i < m; i++){
  		if(arr[i] - arr[i - n + 1] < min){
  			min = arr[i] - arr[i - n + 1];
  		}
  	}
  	cout << min << "\n";
	return 0;
}