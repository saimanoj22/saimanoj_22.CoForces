// Problem: C. Parity Shuffle Sorting
// Contest: Codeforces - Codeforces Round #821 (Div. 2)
// URL: https://codeforces.com/contest/1733/problem/C
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
		for(ll i = 0; i < n; i++){
			cin >> v[i];
		}
		if(n == 1){
			cout << 0 << "\n";
		}
		else{
			cout << n - 1 << "\n";
			cout << 1 << " " << n << "\n";
			ll x;
			if((v[0] + v[n - 1]) % 2)x = v[0];
			else x = v[n - 1];
			for(ll i = 1; i < n - 1; i++){
				if((x + v[i]) % 2)cout << 1 << " " << i + 1 << "\n";
				else cout << i + 1 << " " << n << "\n";
			}
		}
  	}
	return 0;
}