// Problem: D1. Balance (Easy version)
// Contest: Codeforces - Codeforces Round #830 (Div. 2)
// URL: https://codeforces.com/contest/1732/problem/D1
// Memory Limit: 256 MB
// Time Limit: 3000 ms
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
  	set<ll> st;
  	map<ll, ll> mp;
  	for(ll i = 0; i < n; i++){
  		char ch;
  		ll n;
  		cin >> ch >> n;
  		if(ch == '+'){
  			st.insert(n);
  		}
  		else{
  			ll i = mp[n];
  			if(i == 0)i++;
  			while(st.find(n * i) != st.end()){
  				i++;
  			}
  			mp[n] = i;
  			cout << (n * i) << "\n";
  		}
  	}
	return 0;
}