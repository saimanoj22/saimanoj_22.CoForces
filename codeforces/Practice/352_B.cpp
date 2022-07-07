// Problem: B. Jeff and Periods
// Contest: Codeforces - Codeforces Round #204 (Div. 2)
// URL: https://codeforces.com/problemset/problem/352/B
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
  	ll arr[n];
  	map<ll, vector<ll>> mp;
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  		mp[arr[i]].push_back(i + 1);
  	}
  	map<ll, ll> ans;
  	for(auto m : mp){
  		if(m.second.size() == 1){
  			ans[m.first] = 0;
  		}
  		else if(m.second.size() == 2){
  			ans[m.first] = m.second[1] - m.second[0];
  		}
  		else{
  			ll diff = m.second[1] - m.second[0], count = 0;
  			for(ll i = 2; i < m.second.size(); i++){
  				if(m.second[i] - m.second[i - 1] == diff){
  					count++;
  				}
  			}
  			count++;
  			if(count == m.second.size() - 1){
  				ans[m.first] = diff;
  			}
  		}
  	}
  	cout << ans.size() << "\n";
  	for(auto a : ans){
  		cout << a.first << " " << a.second << "\n";
  	}
	return 0;
}