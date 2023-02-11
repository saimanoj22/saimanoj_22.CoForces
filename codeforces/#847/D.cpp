// Problem: D. Matryoshkas
// Contest: Codeforces - Codeforces Round #847 (Div. 3)
// URL: https://codeforces.com/contest/1790/problem/D
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
			mp[v[i]]++;
		}
		
			// for(auto m : mp){
				// cout << m.first << " " << m.second << "\n";
			// }
			// cout << "---\n";
		
		ll count = 0;
		while(mp.size() > 0){
			auto i = mp.begin() -> first;
			vector<ll> v;
			while(mp[i] > 0){
				v.push_back(mp[i]);
				mp[i]--;
				if(mp[i] == 0){
					mp.erase(i);
				}
				i++;
				if(mp[i + 1] == 0){
					mp.erase(i + 1);
				}
			}
			auto x = mp.begin() -> first;
			if(mp[x] == 0)mp.erase(x);
			if(v.size() > 0)count++;

		}
		cout << count << "\n";
		
  	}
	return 0;
}