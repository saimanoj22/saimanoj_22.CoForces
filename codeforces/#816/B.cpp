// Problem: B. Beautiful Array
// Contest: Codeforces - Codeforces Round #816 (Div. 2)
// URL: https://codeforces.com/contest/1715/problem/B
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
		ll n, k, b, s;
		cin >> n >> k >> b >> s;
		vector<ll> v(n, 0);
		v[0] = (k * b);
		s -= v[0];
		if(s < 0)cout << -1 << "\n";
		else{
			for(ll i = 0; i < n; i++){
				if(s >= k){
					v[i] += k - 1;
					s -= (k - 1);
				}
				else{
					v[i] += s;
					s = 0;
					break;
				}
			}
			if(s == 0){
				for(ll i = 0; i < v.size(); i++){
					cout << v[i] << " ";
				}
				cout << "\n";
			}
			else{
				cout << -1 << "\n";
			}
		}
  	}
	return 0;
}