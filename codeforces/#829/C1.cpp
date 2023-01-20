// Problem: C1. Make Nonzero Sum (easy version)
// Contest: Codeforces - Codeforces Round #829 (Div. 2)
// URL: https://codeforces.com/contest/1754/problem/C1
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
		ll po = 0, ne = 0;
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			if(v[i] == 1)po++;
			else ne++;
		}
		vector<pair<ll, ll>> ans;
		if(po > ne){
			ll rem = po - ne;
			ll count = 0;
			if(rem % 2)cout << -1 << "\n";
			else{
				ll i = 0;
				for(i = 0; i < n - 1; i++){
					if(v[i] == -1){
						ans.push_back({i + 1, i + 1});
					}
					else{
						if(count < rem / 2){
							if(v[i] == v[i + 1]){
								ans.push_back({i + 1, i + 2});
								i++;
								count++;
							}
							else{
								ans.push_back({i + 1, i + 1});
							}
						}
						else{
							ans.push_back({i + 1, i + 1});
						}
					}
				}
				if(i == n - 1){
					ans.push_back({i + 1, i + 1});
				}
				if(count == rem / 2){
					cout << ans.size() << "\n";
					for(ll i = 0; i < ans.size(); i++){
						cout << ans[i].first << " " << ans[i].second << "\n";
					}
				}
				else{
					cout << -1 << "\n";
				}
			}
		}
		else if(ne > po){
			ll rem = ne - po;
			ll count = 0;
			if(rem % 2)cout << -1 << "\n";
			else{
				ll i = 0;
				for(i = 0; i < n - 1; i++){
					if(v[i] == 1){
						ans.push_back({i + 1, i + 1});
					}
					else{
						if(count < rem / 2){
							if(v[i] == v[i + 1]){
								ans.push_back({i + 1, i + 2});
								i++;
								count++;
							}
							else{
								ans.push_back({i + 1, i + 1});
							}
						}
						else{
							ans.push_back({i + 1, i + 1});
						}
					}
				}
				if(i == n - 1){
					ans.push_back({i + 1, i + 1});
				}
				if(count == rem / 2){
					cout << ans.size() << "\n";
					for(ll i = 0; i < ans.size(); i++){
						cout << ans[i].first << " " << ans[i].second << "\n";
					}
				}
				else{
					cout << -1 << "\n";
				}
			}
		}
		else{
			cout << n << "\n";
			for(ll i = 0; i < n; i++){
				cout << i + 1 << " " << i + 1 << "\n";
			}
		}
		
  	}
	return 0;
}