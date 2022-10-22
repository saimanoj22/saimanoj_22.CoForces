// Problem: C1. Good Subarrays (Easy Version)
// Contest: Codeforces - Codeforces Round #825 (Div. 2)
// URL: https://codeforces.com/contest/1736/problem/C1
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
		vector<ll> v(n);
		for(ll i = 0; i < n; i++){
			cin >> v[i];
		}
		ll sum = 0;
		ll j = 0, count = 1;
		for(ll i = 0; i < n; i++){
			while(j < n && count > v[i]){
				j++;
				count--;
			}
			sum += i - j + 1;
			count++;
		}
		cout << sum << "\n";
  	}
	return 0;
}