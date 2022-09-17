// Problem: A. Another Sorting Problem
// Contest: Codeforces - COMPFEST 13 - Finals Online Mirror (Unrated, ICPC Rules, Teams Preferred)
// URL: https://codeforces.com/problemset/problem/1575/A
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

bool comp(pair<string, ll> a, pair<string, ll> b){
	for(ll i = 0; i < a.first.length(); i++){
		if(a.first[i] == b.first[i]){
			continue;
		}
		else{
			if(i % 2 == 0){
				if(a.first[i] < b.first[i]){
					return true;
				}
				else{
					return false;
				}
			}
			else{
				if(a.first[i] > b.first[i]){
					return true;
				}
				else {
					return false;
				}
			}
		}
	}
}

int main(){
	// ll testcases;
	// cin >> testcases;
	// while(testcases--){
  	// }
  	ll n, m;
  	cin >> n >> m;
  	vector<pair<string, ll>> v;
  	for(ll i = 0; i < n; i++){
		string s;
		cin >> s;
		v.push_back({s, i + 1});
  	}
  	sort(v.begin(), v.end(), comp);
  	for(ll i = 0; i < v.size(); i++){
  		cout << v[i].second << " ";
  	}
  	cout << "\n";
	return 0;
}