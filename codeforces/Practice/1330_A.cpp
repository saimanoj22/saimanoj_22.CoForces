// Problem: A. Dreamoon and Ranking Collection
// Contest: Codeforces - Codeforces Round #631 (Div. 2) - Thanks, Denis aramis Shitov!
// URL: https://codeforces.com/problemset/problem/1330/A
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
		ll n, x;
		cin >> n >> x;
		ll arr[n], brr[201] = {0};
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			brr[arr[i] - 1] = 1;
		}
		for(ll i = 0; i < x; i++){
			for(ll i = 0; i < 201; i++){
				if(brr[i] == 0){
					brr[i] = 1;
					break;
				}
			}
		}
		for(ll i = 0; i < 201; i++){
			if(brr[i] == 0){
				cout << i << "\n";
				break;
			}
		}
  	}
	return 0;
}