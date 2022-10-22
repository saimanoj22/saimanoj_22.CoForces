// Problem: A. Sum
// Contest: Codeforces - Codeforces Round #827 (Div. 4)
// URL: https://codeforces.com/contest/1742/problem/A
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
		if(a + b == c || b + c == a  || c + a == b){
			cout << "YES\n";
		}
		else cout << "NO\n";
  	}
	return 0;
}