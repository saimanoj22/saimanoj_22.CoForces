// Problem: A. Sorting Parts
// Contest: Codeforces - Codeforces Global Round 19
// URL: https://codeforces.com/problemset/problem/1637/A
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
		ll arr[n], brr[n];
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			brr[i] = arr[i];
		}
		sort(arr, arr + n);
		ll flag = 0;
		for(ll i = 0; i < n; i++){
			if(arr[i] != brr[i]){
				flag = 1;
				break;
			}
		}
		if(flag == 1)cout << "YES\n";
		else cout << "NO\n";
  	}
	return 0;
}