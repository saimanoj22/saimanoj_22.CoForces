// Problem: B. Ilya and Queries
// Contest: Codeforces - Codeforces Round #186 (Div. 2)
// URL: https://codeforces.com/problemset/problem/313/B
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
  	string s;
  	cin >> s;
  	vector<ll> v(s.length(), 0);
  	for(ll i = 0; i < s.length(); i++){
  		if(s[i + 1] == s[i]){
  			v[i] = 1;
  		}
  	}
  	
  	for(ll i = 1; i < v.size(); i++){
  		v[i] += v[i - 1];
  	}
  	
  	ll q;
  	cin >> q;
  	for(ll i = 0; i < q; i++){
  		ll l, r;
  		cin >> l >> r;
  		l--; r--;
  		if(l - 1 < 0){
  			cout << v[r - 1] - 0 << "\n";
  		}
  		else{
  			cout << v[r - 1] - v[l - 1] << "\n";
  		}
  	}
	return 0;
}