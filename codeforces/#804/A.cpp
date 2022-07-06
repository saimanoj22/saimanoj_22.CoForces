// Problem: A. The Third Three Number Problem
// Contest: Codeforces - Codeforces Round #804 (Div. 2)
// URL: https://codeforces.com/contest/1699/problem/A
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
		if(n % 2 == 0){
			cout << n / 2 << " " << n / 2 << " " << 0 << "\n";
		}
		else cout << -1 << "\n";
  	}
	return 0;
}