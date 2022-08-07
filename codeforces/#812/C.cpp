// Problem: C. Build Permutation
// Contest: Codeforces - Codeforces Round #812 (Div. 2)
// URL: https://codeforces.com/contest/1713/problem/C
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
		ll temp = n - 1;
		vector<pair<ll, ll>> v;
		ll mini = 1e9, maxtemp = 0;
		for(ll i = n - 1; i >= 0; i--){
			ll check = i + temp;
			ll root = sqrt(check);
			if(root * root == check){
				v.push_back({i, temp});
				mini = min(i, mini);
				maxtemp = max(maxtemp, temp);
				temp = i - 1;
			}
		}
		if(mini == 0 && maxtemp == n - 1){
			sort(v.begin(), v.end());
			for(ll i = 0; i < v.size(); i++){
				for(ll j = v[i].second; j >= v[i].first; j--){
					cout << j << " ";
				}
			}
			cout << "\n";
		}
		else{
			cout << -1 << "\n";
		}
  	}
	return 0;
}