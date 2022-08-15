// Problem: B. Sereja and Stairs
// Contest: Codeforces - Codeforces Round #223 (Div. 2)
// URL: https://codeforces.com/problemset/problem/381/B
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
  	ll arr[n], maxi = 0;
  	map<ll, ll> mp;
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  		maxi = max(maxi, arr[i]);
  		mp[arr[i]]++;
  	}
  	ll count = 0;
  	vector<ll> start, last;
  	for(auto m : mp){
  		if(m.first != maxi && m.second > 1){
  			count++;
  			last.push_back(m.first);
  		}
  		start.push_back(m.first);
  	}
  	sort(last.begin(), last.end(), greater<>());
  	cout << mp.size() + count << "\n";
  	for(ll i = 0; i < start.size(); i++){
  		cout << start[i] << " ";
  	}
  	for(ll i = 0; i < last.size(); i++){
  		cout << last[i] << " ";
  	}
	return 0;
}