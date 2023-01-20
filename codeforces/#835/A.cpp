// Problem: A. Medium Number
// Contest: Codeforces - Codeforces Round #835 (Div. 4)
// URL: https://codeforces.com/contest/1760/problem/A
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
		ll sum = a + b + c;
		sum -= min(a,min(b,c)) + max(a,max(b,c));
		cout << sum << "\n";
  	}
	return 0;
}