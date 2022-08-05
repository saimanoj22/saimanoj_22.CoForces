// Problem: A. Flipping Game
// Contest: Codeforces - Codeforces Round #191 (Div. 2)
// URL: https://codeforces.com/problemset/problem/327/A
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
  	
  	ll n;
  	cin >> n;
  	ll arr[n];
  	ll one = 0;
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  		one += arr[i];
  	}
  	ll maxi = 0;
  	for(ll i = 0; i < n; i++){
  		for(ll j = i; j < n; j++){
  			ll temp = one;
  			for(ll k = i; k <= j; k++){
  				if(arr[k] == 0)temp++;
  				else temp--;
  			}
  			// cout << i + 1 << " " << j + 1 << " " << temp << "\n";
  			maxi = max(maxi, temp);
  		}
  	}
  	cout << maxi << "\n";
	return 0;
}