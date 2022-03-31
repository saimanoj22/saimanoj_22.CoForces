// Problem: A. Vasya and Coins
// Contest: Codeforces - Codeforces Round #780 (Div. 3)
// URL: https://codeforces.com/contest/1660/problem/A
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
		ll a, b;
		cin >> a >> b;
		if(a == 0){
			cout << 1 << "\n";
		}
		else{
			cout << a + (b*2) + 1 << "\n";
		}
  	}
	return 0;
}