// Problem: A. Number Transformation
// Contest: Codeforces - Codeforces Round #786 (Div. 3)
// URL: https://codeforces.com/contest/1674/problem/A
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
		ll x, y;
		cin >> x >> y;
		if(y % x == 0){
			cout << 1 << " " << y / x << "\n";
		}
		else{
			cout << "0 0\n";
		}
  	}
	return 0;
}