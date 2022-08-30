// Problem: B. Print Check
// Contest: Codeforces - Codeforces Round #344 (Div. 2)
// URL: https://codeforces.com/problemset/problem/631/B
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
  	ll n, m, k;
  	cin >> n >> m >> k;
  	vector<vector<ll>> v;
  	for(ll i = 0; i < n; i++){
  		vector<ll> temp;
  		for(ll j = 0; j < m; j++){
  			temp.push_back(0);
  		}
  		v.push_back(temp);
  	}
  	map<ll, pair<ll, ll>> rows, columns;
  	for(ll i = 1; i <= k; i++){
  		ll type, no, val;
  		cin >> type >> no >> val;
  		if(type == 1){
			rows[no] = {val, i};
  		}
  		else{
			columns[no] = {val, i};
  		}
  	}
  	for(ll i = 0; i < n; i++){
  		for(ll j = 0; j < m; j++){
  			ll rtime = rows[i + 1].second;
  			ll ctime = columns[j + 1].second;
  			if(rtime > ctime){
  				v[i][j] = rows[i + 1].first;
  			}
  			else{
  				v[i][j] = columns[j + 1].first;
  			}
  			cout << v[i][j] << " ";
  		}
  		cout << "\n";
  	}
	return 0;
}