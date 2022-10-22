// Problem: A. Select Three Sticks
// Contest: Codeforces - Codeforces Round #822 (Div. 2)
// URL: https://codeforces.com/contest/1734/problem/A
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
		vector<ll> v(n), u;
		for(ll i = 0; i < n; i++){
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		for(ll i = 0; i < v.size(); i++){
			if(i > 0){
				u.push_back(v[i] - v[i - 1]);
			}
		}
		ll mini = 1e9;
		for(ll i = 1; i < u.size(); i++){
			mini = min(mini, (u[i] + u[i - 1]));
		}
		cout << mini << "\n";
  	}
	return 0;
}