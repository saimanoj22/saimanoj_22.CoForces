// Problem: B. Sort the Array
// Contest: Codeforces - Codeforces Round #258 (Div. 2)
// URL: https://codeforces.com/problemset/problem/451/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	// ll testcases;
	// cin >> testcases;
	// while(testcases--){
  	// }
		ll n;
		cin >> n;
		ll arr[n], brr[n];
		map<ll, ll> mp;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			brr[i] = arr[i];
		}
		sort(brr, brr + n);
		for(ll i = 0; i < n; i++){
			mp[brr[i]] = i;
		}
		for(ll i = 0; i < n; i++){
			arr[i] = mp[arr[i]];
		}
		ll l = -1;
		for(ll i = 0 ; i < n; i++){
			if(arr[i] != i){
				l = i;
				break;
			}
		}
		ll r = -1;
		for(ll i = n - 1; i >= 0; i--){
			if(arr[i] != i){
				r = i;
				break;
			}
		}
		if(l == -1 || r == -1){
			cout << "yes\n";
			cout << 1 << " " << 1 << "\n";
		}
		else{
			reverse(arr + l, arr + r + 1);
			ll flag = 0;
			for(ll i = 0; i < n; i++){
				if(arr[i] != i){
					flag = 1;
				}
			}
			if(flag)cout << "no\n";
			else{
				cout << "yes\n";
				cout << l + 1 << " " << r + 1 << "\n";
			}
		}

	return 0;
}