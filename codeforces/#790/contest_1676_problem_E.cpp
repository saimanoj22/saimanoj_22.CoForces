// Problem: E. Eating Queries
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/contest/1676/problem/E
// Memory Limit: 256 MB
// Time Limit: 3500 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n, q;
		cin >> n >> q;
		ll arr[n], sum = 0;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
		}
		
		sort(arr, arr+n, greater<ll>());
		vector<ll> v;
		for(ll i = 0; i < n; i++){
			sum += arr[i];
			v.push_back(sum);
		}
		for(ll i = 0; i < q; i++){
			ll qq;
			cin >> qq;
			if(qq > sum)cout << -1 << "\n";
			else if(qq == sum)cout << n << "\n";
			else{
				ll lower = lower_bound(v.begin(), v.end(), qq) - v.begin();
				cout << lower + 1 << "\n";
			}
		}
  	}
	return 0;
}