// Problem: A. Shovels and Swords
// Contest: Codeforces - Educational Codeforces Round 89 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1366/problem/A
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
		ll a, b;
		cin >> a >> b;
		ll c = (a + b) / 3;
		cout << min(a, min(b, c)) << "\n";
  	}
	return 0;
}