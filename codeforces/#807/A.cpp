// Problem: A. Mark the Photographer
// Contest: Codeforces - Codeforces Round #807 (Div. 2)
// URL: https://codeforces.com/contest/1705/problem/A
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
		ll n, x;
		cin >> n >> x;
		vector<ll> v, w;
		for(ll i = 0; i < 2*n; i++){
			ll a;
			cin >> a;
			v.push_back(a);
		}
		sort(v.begin(), v.end());
		ll flag = 0;
		for(ll i = 0; i < n; i++){
			if(v[n + i] - v[i] >= x){
				continue;
			}
			else{
				flag = 1;
				break;
			}
		}
		if(flag)cout << "NO\n";
		else cout << "YES\n";
  	}
	return 0;
}