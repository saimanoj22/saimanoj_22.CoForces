// Problem: C. Train and Queries
// Contest: Codeforces - Codeforces Round #805 (Div. 3)
// URL: https://codeforces.com/contest/1702/problem/C
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n, k;
		cin >> n >> k;
		map<ll, vector<ll>> mp;
		for(ll i = 0; i < n; i++){
			ll a;
			cin >> a;
			if(mp.find(a) == mp.end()){
				mp[a] = {i, i};
			}
			else{
				mp[a][0] = min(mp[a][0], i);
				mp[a][1] = max(mp[a][1], i);
			}
		}
		for(ll i = 0; i < k; i++){
			ll a, b;
			cin >> a >> b;
			if(mp.find(a) == mp.end() || mp.find(b) == mp.end()){
				cout << "NO\n";
			}
			else{
				if(mp[a][0] < mp[b][1]){
					cout << "YES\n";
				}
				else cout << "NO\n";
			}
		}
  	}
	return 0;
}