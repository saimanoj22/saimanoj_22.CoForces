// Problem: B. XY Sequence
// Contest: Codeforces - Educational Codeforces Round 125 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1657/problem/B
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
		ll n, b, x, y;
		cin >> n >> b >> x >> y;
		ll arr[n+1], sum = 0;
		arr[0] = 0;
		for(ll i = 1; i <= n; i++){
			if(arr[i - 1] + x <= b){
				arr[i] = arr[i - 1] + x;
			}
			else if(arr[i - 1] - y <= b){
				arr[i] = arr[i - 1] - y;
			}
			sum += arr[i];
		}
		cout << sum << "\n";
  	}
	return 0;
}