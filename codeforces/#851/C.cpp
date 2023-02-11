// Problem: C. Matching Numbers
// Contest: Codeforces - Codeforces Round #851 (Div. 2)
// URL: https://codeforces.com/contest/1788/problem/C
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
		if(n % 2 == 0)cout << "No\n";
		else{
			cout << "Yes\n";
			ll d = 2 * n;
			for(ll i = 1; i <= n; i += 2){
				cout << i << " " << d << "\n";
				d--;
			}
			for(ll i = 2; i <= n; i += 2){
				cout << i << " " << d << "\n";
				d--;
			}
		}
  	}
	return 0;
}