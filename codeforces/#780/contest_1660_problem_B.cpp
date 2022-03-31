// Problem: B. Vlad and Candies
// Contest: Codeforces - Codeforces Round #780 (Div. 3)
// URL: https://codeforces.com/contest/1660/problem/B
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
		sort(arr, arr + n);
		
		if(n == 1){
			if(arr[0] == 1)cout << "YES\n";
			else cout << "NO\n";
		}
		else{
			if(arr[n - 1] - arr[n - 2] == 0 || arr[n - 1] - arr[n - 2] == 1)cout << "YES\n";
			else cout << "NO\n";
		}
		
  	}
	return 0;
}