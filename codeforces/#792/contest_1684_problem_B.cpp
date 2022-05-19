// Problem: B. Z mod X = C
// Contest: Codeforces - Codeforces Round #792 (Div. 1 + Div. 2)
// URL: https://codeforces.com/contest/1684/problem/B
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
		ll a, b, c;
		cin >> a >> b >> c;
		ll z = c;
		ll y = c * 2 + b;
		ll x = y + a;
		cout << x << " " << y << " " << z << "\n";
  	}
	return 0;
}   