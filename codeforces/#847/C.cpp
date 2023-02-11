// Problem: C. Premutation
// Contest: Codeforces - Codeforces Round #847 (Div. 3)
// URL: https://codeforces.com/contest/1790/problem/C
// Memory Limit: 256 MB
// Time Limit: 3000 ms
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
		vector<ll> a(n - 1, 0);
		vector<vector<ll>> v(n, a);
		map<ll, ll> mp, mp1;
		for(ll i = 0; i < n; i++){
			for(ll j = 0; j < n - 1; j++){
				cin >> v[i][j];
				if(j == 0)mp[v[i][j]]++;
				if(j == n - 2)mp1[v[i][j]]++;
			}
		}
		
		ll one, two;
		for(auto m : mp){
			if(m.second == n - 1)one = m.first;
		}
		for(auto m : mp1){
			if(m.second == n - 1)two = m.first;
		}
		
		vector<ll> ans(n, 0), temp;
		ans[0] = one;
		ans[n - 1] = two;
		
		for(ll i = 0; i < n; i++){
			if(v[i][0] == one && v[i][n - 2] != two)temp = v[i];
		}
		
		for(ll i = 1; i < n - 1; i++){
			ans[i] = temp[i];
		}
		
		for(ll i = 0; i < n; i++)cout << ans[i] << " ";
		
		cout << "\n";
		
		
  	}
	return 0;
}