// Problem: B. Optimal Reduction
// Contest: Codeforces - Codeforces Round #812 (Div. 2)
// URL: https://codeforces.com/contest/1713/problem/B
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
		vector<ll> v(n, 0);
		for(ll i = 0; i < n; i++){
			cin >> v[i];
		}
		
		if(n == 1){
			cout << "YES\n";
		}
		else{
			ll flag = 0;
			bool ok = true;
			for(ll i = 0; i < n - 1; i++){
				if(v[i] <= v[i + 1] && flag == 0){
					// cout << v[i] << " " << v[i + 1] << "\n";
					continue;
				}
				else{
					flag = 1;
				}
				if(flag == 1){
					// cout << v[i] << " " << v[i + 1] << "**\n";
					if(v[i] < v[i + 1]){
						ok = false;
					}
				}
			}
			if(ok)cout << "YES\n";
			else cout << "NO\n";
		}
		
  	}
	return 0;
}