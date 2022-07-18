// Problem: F. Yet Another Problem About Pairs Satisfying an Inequality
// Contest: Codeforces - Codeforces Round #806 (Div. 4)
// URL: https://codeforces.com/contest/1703/problem/F
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
		vector<ll> index, value;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			if(arr[i] < i + 1){
				index.push_back(i + 1);
				value.push_back(arr[i]);
			}
		}
		sort(index.begin(), index.end());
		sort(value.begin(), value.end());
		ll count = 0;
		for(ll i = 0; i < index.size(); i++){
			ll temp =  upper_bound(value.begin(), value.end(), index[i]) - value.begin();
			count += value.size() - temp;
		}
		cout << count << "\n";
  	}
	return 0;
}