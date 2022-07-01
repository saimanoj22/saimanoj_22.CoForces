// Problem: A. Jeff and Digits
// Contest: Codeforces - Codeforces Round #204 (Div. 2)
// URL: https://codeforces.com/problemset/problem/352/A
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
  	ll arr[n], five = 0, zero = 0;
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  		if(arr[i] == 5){
  			five++;
  		}
  		else zero++;
  	}
  	if(zero == 0)cout << -1 << "\n";
	else if(zero > 0 && five < 9)cout << 0 << "\n";
	else if(five >= 9){
		ll temp = five / 9;
		for(ll i = 0; i < temp * 9; i++){
			cout << 5;
		}
		if(zero > 0){
			for(ll i = 0; i < zero; i++){
				cout << 0;
			}
		}
		cout << "\n";
	}
	return 0;
}