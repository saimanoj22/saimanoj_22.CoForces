// Problem: A. XOR Mixup
// Contest: Codeforces - Codeforces Round #803 (Div. 2)
// URL: https://codeforces.com/contest/1698/problem/A
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
		ll n;
		cin >> n;
		ll arr[n], xorr;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			if(i == 0)xorr = arr[0];
			else xorr = xorr ^ arr[i];
		}
		for(ll i = 0; i < n; i++){
			if((xorr ^ arr[i]) == arr[i]){
				cout << arr[i];
				break;
			}
		}
		cout << "\n";
  	}
	return 0;
}