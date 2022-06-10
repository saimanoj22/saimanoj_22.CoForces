// Problem: B. Mystic Permutation
// Contest: Codeforces - Codeforces Round #798 (Div. 2)
// URL: https://codeforces.com/contest/1689/problem/B
// Memory Limit: 256 MB
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
		ll n;
		cin >> n;
		ll arr[n], brr[n];
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			brr[i] = arr[i];
		}
		if(n == 1){
			cout << -1 << "\n";
		}
		else{
			sort(brr, brr+n);
			for(ll i = 0; i < n - 1; i++){
				if(arr[i] == brr[i]){
					swap(brr[i], brr[i+1]);
				}
			}
			for(ll i = n - 1; ; i--){
				if(brr[i] != arr[i]){
					break;
				}
				else{
					swap(brr[i], brr[i - 1]);
				}
			}
			for(ll i = 0; i < n; i++){
				cout << brr[i] << " ";
			}
			cout << "\n";
		}
  	}
	return 0;
}