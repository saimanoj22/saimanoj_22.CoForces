// Problem: B. Mark the Dust Sweeper
// Contest: Codeforces - Codeforces Round #807 (Div. 2)
// URL: https://codeforces.com/contest/1705/problem/B
// Memory Limit: 256 MB
// Time Limit: 1500 ms
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
		ll flag = 0, sum = 0;
		for(ll i = 0; i < n - 1; i++){
			if(arr[i] != 0){
				sum += arr[i];
				if(flag == 0)flag = 1;
			}
			if(arr[i] == 0 && flag == 1)sum++;
		}
		cout << sum << "\n";
  	}
	return 0;
}