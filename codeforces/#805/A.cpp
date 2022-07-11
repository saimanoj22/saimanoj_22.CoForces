// Problem: A. Round Down the Price
// Contest: Codeforces - Codeforces Round #805 (Div. 3)
// URL: https://codeforces.com/contest/1702/problem/A
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
		ll temp = floor(log10(n));
		ll ans = 1;
		while(temp--){
			ans *= 10;
		}
		cout << n - ans << "\n";
  	}
	return 0;
}