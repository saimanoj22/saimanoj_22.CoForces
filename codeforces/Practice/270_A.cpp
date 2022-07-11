// Problem: A. Fancy Fence
// Contest: Codeforces - Codeforces Round #165 (Div. 2)
// URL: https://codeforces.com/problemset/problem/270/A
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
		ll a;
		cin >> a;
		if(360 % (180 - a) == 0)cout << "YES\n";
		else cout << "NO\n";
  	}
	return 0;
}