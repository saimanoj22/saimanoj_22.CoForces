// Problem: B. Array Decrements
// Contest: Codeforces - Codeforces Round #797 (Div. 3)
// URL: https://codeforces.com/contest/1690/problem/B
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
		ll arr[n], brr[n], crr[n];
		vector<ll> v;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
		}
		for(ll i = 0; i < n; i++){
			cin >> brr[i];
		}
		ll flag = 0;
		for(ll i = 0; i < n; i++){
			crr[i] = arr[i] - brr[i];
			v.push_back(crr[i]);
			if(crr[i] < 0)flag = 1;
		}
		if(flag == 1){
			cout << "NO\n";
		}
		else{
			sort(v.begin(), v.end());
			if(v[0] == v[n - 1]){
				cout << "YES\n";
			}
			else{
				ll flag2 = 0;
				for(ll i = n - 1; i >= 0; i--){
					
					if(crr[i] != v[n - 1]){
						if(brr[i] != 0){
							flag2 = 1;
						}
					}
				}
				if(flag2 == 1){
					cout << "NO\n";
				}
				else{
					cout << "YES\n";
				}
			}
		}
		
  	}
	return 0;
}