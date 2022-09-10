// Problem: A. Colored Balls: Revisited
// Contest: Codeforces - Educational Codeforces Round 135 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1728/problem/A
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
		ll index = -1, maxi = -1e9;
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			if(maxi <= v[i]){
				maxi = v[i];
				index = i + 1;
			}
		}
		cout << index << "\n";
  	}
	return 0;
}