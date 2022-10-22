// Problem: B. Tea with Tangerines
// Contest: Codeforces - Codeforces Round #824 (Div. 2)
// URL: https://codeforces.com/contest/1735/problem/B
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
		ll mini = 1e9;
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			mini = min(v[i], mini);
		}
		ll count = 0;
		for(ll i = 0; i < n; i++){
			if(v[i] >= 2 * mini){
				ll a = v[i] / ((2 * mini) - 1);
				ll b = v[i] % ((2 * mini) - 1);
				count += a;
				if(b != 0)count++;
				count--;
			}
		}
		cout << count << "\n";
  	}
	return 0;
}