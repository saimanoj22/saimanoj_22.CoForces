// Problem: A. Two Elevators
// Contest: Codeforces - Codeforces Round #820 (Div. 3)
// URL: https://codeforces.com/contest/1729/problem/A
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
		ll one = abs(a - 1);
		ll two = abs(b - c);
		two += abs(c - 1);
		if(one < two)cout << 1 << "\n";
		else if(one > two)cout << 2 << "\n";
		else cout << 3 << "\n";
  	}
	return 0;
}