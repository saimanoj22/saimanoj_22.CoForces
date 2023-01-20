// Problem: C. Permutation Operations
// Contest: Codeforces - Codeforces Global Round 23
// URL: https://codeforces.com/contest/1746/problem/C
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
		map<ll, ll> mp;
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			mp[v[i]] = i + 1;
		}
		for(ll i = 0; i < n; i++){
			if(mp[i + 1] == n){
				cout << 1 << " ";
			}
			else cout << mp[i + 1] + 1 << " ";
		}
		cout << "\n";
  	}
	return 0;
}