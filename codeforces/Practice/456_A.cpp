// Problem: A. Laptops
// Contest: Codeforces - Codeforces Round #260 (Div. 2)
// URL: https://codeforces.com/problemset/problem/456/A
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
	vector<vector<ll>> v;
  	for(ll i = 0; i < n; i++){
  		ll a, b;
  		cin >> a >> b;
  		vector<ll> temp = {a, b};
  		v.push_back(temp);
  	}
  	sort(v.begin(), v.end());
  	ll flag = 0;
  	for(ll i = 1; i < v.size(); i++){
  		if(v[i - 1][1] > v[i][1])flag = 1;
  	}
  	if(flag)cout << "Happy Alex\n";
  	else cout << "Poor Alex\n";
	return 0;
}