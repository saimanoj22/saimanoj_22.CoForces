// Problem: A. Grass Field
// Contest: Codeforces - Educational Codeforces Round 131 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1701/problem/A
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
	ll sum = 0;
	while(testcases--){
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if(a == 0 && b == 0 && c == 0 && d == 0){
			cout << 0 << "\n";
		}
		else if(a == 1 && b == 1 && c == 1 && d == 1){
			cout << 2 << "\n";
		}
		else cout << 1 << "\n";
  	}
	return 0;
}