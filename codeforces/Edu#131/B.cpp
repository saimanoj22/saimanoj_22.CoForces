// Problem: B. Permutation
// Contest: Codeforces - Educational Codeforces Round 131 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1701/problem/B
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
		cout << 2 << "\n";
		for(ll i = 1; i <= n; i += 2){
			ll temp = i;
			while(temp <= n){
				cout << temp << " ";
				temp *= 2;
			}
		}
		cout << "\n";
  	}
	return 0;
}