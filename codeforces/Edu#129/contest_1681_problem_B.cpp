// Problem: B. Card Trick
// Contest: Codeforces - Educational Codeforces Round 129 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1681/problem/B
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
		ll arr[n];
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
		}
		ll m;
		cin >> m;
		ll brr[m], sum = 0;
		for(ll i = 0; i < m; i++){
			cin >> brr[i];
			sum += brr[i];
		}
		cout << arr[sum % n] << "\n";
  	}
	return 0;
}