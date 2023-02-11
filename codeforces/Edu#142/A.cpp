// Problem: A. GamingForces
// Contest: Codeforces - Educational Codeforces Round 142 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1792/problem/A
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
		ll one = 0;
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			if(v[i] == 1)one++;
		}
		ll temp = one / 2;
		if(one % 2)temp++;
		cout << (n - one) + temp << "\n";
		
  	}
	return 0;
}