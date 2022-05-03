// Problem: B. Social Distance
// Contest: Codeforces - Codeforces Round #783 (Div. 2)
// URL: https://codeforces.com/contest/1668/problem/B
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
		ll n, m;
		cin >> n >> m;
		ll arr[n];
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
		}
		sort(arr, arr + n);
		ll sum = 0;
		for(ll i = n - 1; i >= 0; i--){
			if(i == n - 1)sum += arr[i] + arr[i];
			else if(i != 0)sum += arr[i];
		}
		if(sum + n <= m)cout << "YES\n";
		else cout << "NO\n";
  	}
	return 0;
}