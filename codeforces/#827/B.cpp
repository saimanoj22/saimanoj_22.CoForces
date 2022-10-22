// Problem: B. Increasing
// Contest: Codeforces - Codeforces Round #827 (Div. 4)
// URL: https://codeforces.com/contest/1742/problem/B
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
		vector<ll> v(n);
		for(ll i = 0; i < n; i++)cin >> v[i];
		sort(v.begin(), v.end());
		bool flag = false;
		for(ll i = 1; i < n; i++){
			if(v[i] <= v[i - 1]){
				flag = true;
				break;
			}
		}
		if(flag)cout << "NO\n";
		else cout << "YES\n";
  	}
	return 0;
}