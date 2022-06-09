// Problem: C. Restoring the Duration of Tasks
// Contest: Codeforces - Codeforces Round #797 (Div. 3)
// URL: https://codeforces.com/contest/1690/problem/C
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
		ll arr[n], brr[n];
		vector<ll> v;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
		}
		for(ll i = 0; i < n; i++){
			cin >> brr[i];
		}
		for(ll i = 0; i < n; i++){
			if(i == 0){
				v.push_back(brr[i] - arr[i]);
			}
			else{
				if(brr[i - 1] > arr[i]){
					v.push_back(brr[i] - brr[i - 1]);
				}
				else{
					v.push_back(brr[i] - arr[i]);
				}
			}
		}
		for(ll i = 0; i < v.size(); i++){
			cout << v[i] << " ";
		}
		cout << "\n";
  	}
	return 0;
}