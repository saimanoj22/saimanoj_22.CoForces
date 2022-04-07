// Problem: A. Anti Light's Cell Guessing
// Contest: Codeforces - Codeforces Global Round 17
// URL: https://codeforces.com/problemset/problem/1610/A
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
		ll n, m;
		cin >> n >> m;
		if(n == 1 && m == 1)cout << 0 << "\n";
		else if(n == 1 || m == 1)cout << 1 << "\n";
		else cout << 2 << "\n";
  	}
	return 0;
}