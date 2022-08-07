// Problem: A. Supercentral Point
// Contest: Codeforces - Codeforces Round #112 (Div. 2)
// URL: https://codeforces.com/problemset/problem/165/A
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
  	ll n;
  	cin >> n;
	vector<pair<ll, ll>> v;
	for(ll i = 0; i < n; i++){
		ll a, b;
		cin >> a >> b;
		v.push_back({a, b});
	}
	ll count = 0;
	for(ll i = 0; i < n; i++){
		ll up = 0, down = 0, left = 0, right = 0;
		for(ll j = 0; j < n; j++){
			if(i != j){
				if(v[i].first == v[j].first){
					if(v[i].second > v[j].second)down++;
					else if(v[i].second < v[j].second)up++;
				}
				if(v[i].second == v[j].second){
					if(v[i].first > v[j].first)right++;
					else if(v[i].first < v[j].first)left++;
				}
			}
		}
		if(up > 0 && down > 0 && right > 0 && left > 0){
			count++;
		}
	}
	cout << count << "\n";
  	
	return 0;
}