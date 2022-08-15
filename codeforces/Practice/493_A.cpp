// Problem: A. Vasya and Football
// Contest: Codeforces - Codeforces Round #281 (Div. 2)
// URL: https://codeforces.com/problemset/problem/493/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
  	string home, away;
  	cin >> home >> away;
  	ll n;
  	cin >> n;
  	vector<vector<string>> v;
  	for(ll i = 0; i < n; i++){
  		string min, team, num, card;
  		cin >> min >> team >> num >> card;
  		v.push_back({min, team, num, card});
  	}

  	map<pair<string, string>, ll> mp;
  	map<pair<string, string>, ll> visited;
  	vector<vector<string>> ans;
  	for(ll i = 0; i < v.size(); i++){
		string num = v[i][2];
		string team = v[i][1];
		if(v[i][3] == "r" && visited[{num, team}] == 0){
			if(v[i][1] == "h")ans.push_back({home, v[i][2], v[i][0]});
			else ans.push_back({away, v[i][2], v[i][0]});
			visited[{num, team}] = 1;
		}
		else{
			mp[{num, team}]++;
			if(mp[{num, team}] == 2 && visited[{num, team}] == 0){
				// cout << num << " " << team << " " << v[i][0] << "\n";
				if(v[i][1] == "h")ans.push_back({home, v[i][2], v[i][0]});
				else ans.push_back({away, v[i][2], v[i][0]});
				visited[{num, team}] = 1;
			}
		}
  	}
  	for(ll i = 0; i < ans.size(); i++){
  		for(ll j = 0; j < 3; j++){
  			cout << ans[i][j] << " ";
  		}
  		cout << "\n";
  	}
	return 0;
}