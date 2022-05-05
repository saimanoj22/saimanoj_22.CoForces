// Problem: A. Food for Animals
// Contest: Codeforces - Codeforces Round #787 (Div. 3)
// URL: https://codeforces.com/contest/1675/problem/A
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
		ll a, b, c, x, y;
		cin >> a >> b >> c >> x >> y;
		if((a + c >= x) && (b + c >= y) && a + b + c >= x + y){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
  	}
	return 0;
}