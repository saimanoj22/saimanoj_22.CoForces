// Problem: C. Sort Zero
// Contest: Codeforces - Codeforces Round #813 (Div. 2)
// URL: https://codeforces.com/contest/1712/problem/C
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
		
		ll index = -1;
		map<ll, ll> ascen;
		for(ll i = n - 1; i > 0; i--){
			ascen[arr[i]]++;
			if(arr[i] < arr[i - 1]){
				index = i;
				break;
			}
		}
		if(index < 0){
			cout << 0 << "\n";
		}
		else{
			ll flag = 0;
			map<ll, ll> mp, check;
			for(ll i = 0; i < index; i++){
				mp[arr[i]]++;
				check[arr[i]]++;
				if(ascen[arr[i]] > 0){
					flag = 1;
				}
			}
			if(flag == 0){
				cout << mp.size() << "\n";
			}
			else{
				ll temp = -1;
				for(ll i = n - 1; i >= index; i--){
					if(mp[arr[i]] > 0){
						temp = i;
						break;
					}
				}
				for(ll i = index; i <= temp; i++){
					check[arr[i]]++;
				}
				cout << check.size() << "\n";
			}
		}
  	}
	return 0;
}