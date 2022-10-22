// Problem: A. Number Replacement
// Contest: Codeforces - Codeforces Round  #828 (Div. 3)
// URL: https://codeforces.com/contest/1744/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n;
		cin >> n;
		vector<ll> v(n);
		map<ll, char> mp;
		for(ll i = 0; i < n; i++){
			cin >> v[i];
		}
		string s;
		cin >> s;
		bool flag = false;
		for(ll i = 0; i < s.length(); i++){
			if(mp.find(v[i]) == mp.end()){
				mp[v[i]] = s[i];
			}
			else{
				if(mp[v[i]] != s[i]){
					flag = true;
					break;
				}
			}
		}
		if(flag){
			cout << "NO\n";
		}
		else cout << "YES\n";
		
  	}
	return 0;
}