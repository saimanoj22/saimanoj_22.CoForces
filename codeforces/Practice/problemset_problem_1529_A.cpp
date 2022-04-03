// Problem: A. Eshag Loves Big Arrays
// Contest: Codeforces - Codeforces Round #722 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1529/A
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
		ll arr[n], flag = 0;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
		}
		sort(arr, arr + n);
		
		for(ll i = 0; i < n; i++){
			if(i > 0 && arr[i] != arr[i - 1]){
				flag = i;
				break;
			}
		}
		if(flag == 0)cout << 0 << "\n";
		else cout << n - flag << "\n";
  	}
	return 0;
}