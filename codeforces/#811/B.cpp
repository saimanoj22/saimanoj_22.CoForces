// Problem: B. Remove Prefix
// Contest: Codeforces - Codeforces Round #811 (Div. 3)
// URL: https://codeforces.com/contest/1714/problem/B
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
		map<ll, ll> mp;
		ll flag = 0, index = -1;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		for(ll i = n - 1; i >= 0; i--){
			mp[arr[i]]++;
			if(mp[arr[i]] > 1 && flag == 0){
				index = i;
				flag = 1;
			}
		}
		cout << index + 1 << "\n";

  	}
	return 0;
}