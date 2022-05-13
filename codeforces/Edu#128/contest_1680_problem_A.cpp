// Problem: A. Minimums and Maximums
// Contest: Codeforces - Educational Codeforces Round 128 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1680/problem/A
// Memory Limit: 512 MB
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
		ll l1, r1, l2, r2;
		cin >> l1 >> r1 >> l2 >> r2;
		if(l2 >= l1 && l2 <= r1)cout << l2 << "\n";
		else if(l1 >= l2 && l1 <= r2)cout << l1 << "\n";
		else cout << l1 + l2 << "\n";
  	}
	return 0;
}