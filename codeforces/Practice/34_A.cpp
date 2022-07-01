// Problem: A. Reconnaissance 2
// Contest: Codeforces - Codeforces Beta Round #34 (Div. 2)
// URL: https://codeforces.com/problemset/problem/34/A
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
  	ll n;
  	cin >> n;
  	ll arr[n], min = 1e9, one = -1, two = -1;
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  		if(i > 0){
  			if(abs(arr[i] - arr[i - 1]) < min){
  				min = abs(arr[i] - arr[i - 1]);
  				one = i + 1;
  				two = i;
  			}
  		}
  	}
  	if(abs(arr[0] - arr[n - 1]) < min){
  		one = n;
  		two = 1;
  	}
  	cout << one << " " << two << "\n";
	return 0;
}