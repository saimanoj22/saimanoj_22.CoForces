// Problem: A. LCM Problem
// Contest: Codeforces - Educational Codeforces Round 92 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1389/problem/A
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
		ll l, r;
		cin >> l >> r;
		if(2 * l <= r){
			cout << l << " " << 2*l << "\n";
		}
		else{
			cout << -1  << " " << -1 << "\n";
		}
  	}
	return 0;
}