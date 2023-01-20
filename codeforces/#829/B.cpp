// Problem: B. Kevin and Permutation
// Contest: Codeforces - Codeforces Round #829 (Div. 2)
// URL: https://codeforces.com/contest/1754/problem/B
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
		ll temp = n / 2;
		for(ll i = temp; i >= 1; i--){
			for(ll j = i; j <= n; j += temp){
				cout << j << " ";
			}
		}
		cout << "\n";
  	}
	return 0;
}