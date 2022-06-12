// Problem: A. Parkway Walk
// Contest: Codeforces - Educational Codeforces Round 130 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1697/problem/A
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
		ll n, m;
		cin >> n >> m;
		ll arr[n], sum = 0;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			sum += arr[i];
		}
		if(m >= sum)cout << 0 << "\n";
		else cout << sum - m << "\n";
  	}
	return 0;
}