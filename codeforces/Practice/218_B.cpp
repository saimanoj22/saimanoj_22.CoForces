// Problem: B. Airport
// Contest: Codeforces - Codeforces Round #134 (Div. 2)
// URL: https://codeforces.com/problemset/problem/218/B
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
  	// }
  	ll n, m;
  	cin >> n >> m;
  	ll arr[m];
  	for(ll i = 0; i < m; i++){
  		cin >> arr[i];
  	}
  	sort(arr, arr+m);
  	ll min = 0, max = 0, ntemp = 0;
  	for(ll i = 0; i < m; i++){
  		ll temp = arr[i];
  		while(temp > 0 && ntemp < n){
  			min += temp;
  			temp--;
  			ntemp++;
  		}
  	}
	for(ll i = 0; i < n; i++){
		max += arr[m - 1];
		arr[m - 1]--;
		if(arr[m - 2] > arr[m - 1]){
			sort(arr, arr+m);
		}
		
	}
  	cout << max << " " << min << "\n";
	return 0;
}