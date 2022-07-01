// Problem: A. Dragons
// Contest: Codeforces - Codeforces Round #142 (Div. 2)
// URL: https://codeforces.com/problemset/problem/230/A
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
  	ll n, s;
  	cin >> s >> n;
  	vector<vector<ll>> v;
  	for(ll i = 0; i < n; i++){
  		ll a, b;
  		vector<ll> temp;
  		cin >> a >> b;
  		temp.push_back(a);
  		temp.push_back(b);
  		v.push_back(temp);
  	}
  	sort(v.begin(), v.end());
  	ll flag = 0;
  	for(ll i = 0; i < v.size(); i++){
  		if(s <= v[i][0]){
  			flag = 1;
  			break;
  		}
  		else{
  			s += v[i][1];
  		}
  	}
  	if(flag == 1)cout << "NO\n";
  	else cout << "YES\n";
	return 0;
}