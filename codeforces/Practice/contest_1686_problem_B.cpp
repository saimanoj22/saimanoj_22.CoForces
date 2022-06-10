// Problem: B. Odd Subarrays
// Contest: Codeforces - Codeforces Round #794 (Div. 2)
// URL: https://codeforces.com/contest/1686/problem/B
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
		ll arr[n];
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
		}
		ll count = 0, temp = arr[n - 1];
		for(ll i = n - 1; i >= 0; i--){
			if(arr[i] > temp){
				count++;
				if(i != 0)temp = arr[i - 1];
			}
			else{
				temp = arr[i];
			}
		}
		cout << count << "\n";
  	}
	return 0;
}