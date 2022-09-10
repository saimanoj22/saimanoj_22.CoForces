// Problem: C. Word Game
// Contest: Codeforces - Codeforces Round #817 (Div. 4)
// URL: https://codeforces.com/contest/1722/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
		ll a = 0, b = 0, c = 0;
		vector<string> u, v, w;
		map<string, ll> mp;
		for(ll i = 0; i < 3; i++){
			for(ll j = 0; j < n; j++){
				string s;
				cin >> s;
				if(i == 0)u.push_back(s);
				else if(i == 1)v.push_back(s);
				else if(i == 2)w.push_back(s);
				mp[s]++;
			}
		}
		for(ll j = 0; j < n; j++){
			if(mp[u[j]] == 1)a += 3;
			else if(mp[u[j]] == 2)a++;
		}
		for(ll j = 0; j < n; j++){
			if(mp[v[j]] == 1)b += 3;
			else if(mp[v[j]] == 2)b++;
		}
		for(ll j = 0; j < n; j++){
			if(mp[w[j]] == 1)c += 3;
			else if(mp[w[j]] == 2)c++;
		}
		cout << a << " " << b << " " << c << "\n";
  	}
	return 0;
}