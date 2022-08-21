// Problem: C. Fighting Tournament
// Contest: Codeforces - Codeforces Round #814 (Div. 2)
// URL: https://codeforces.com/contest/1719/problem/C
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
		ll n, q;
		cin >> n >> q;
		ll arr[n], index = -1, maxi = 0;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			if(arr[i] > maxi){
				maxi = arr[i];
				index = i;
			}
		}
		
		map<ll, ll> mp, ind;
		for(ll i = 1; i < index; i++){
			ll count = 0;
			ind[arr[i]] = i;
			for(ll j = 0; j < i; j++){
				if(arr[j] < arr[i]){
					count++;
				}
			}
			mp[arr[i]] = count;   
		}
		
		
		
		for(ll i = 0; i < q; i++){
			ll x, k;
			cin >> x >> k;
			x = arr[x - 1];
			// cout << x << "**\n";
			if(x == maxi){
				if(k < index){
					cout << 0 << "\n";
				}
				else{
					ll temp = index - 1;
					if(temp < 0)temp = 0;
					cout << k - temp << "\n";
				}
			}
			else{
				if(mp[x] > 0){
					if(k < ind[x]){
						cout << 0 << "\n";
					}
					else{
						cout << mp[x] << "\n";
					}
				}
				else{
					cout << 0 << "\n";
				}
			}
		}
  	}
	return 0;
}