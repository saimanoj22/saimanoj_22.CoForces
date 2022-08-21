// Problem: A. Chip Game
// Contest: Codeforces - Codeforces Round #814 (Div. 2)
// URL: https://codeforces.com/contest/1719/problem/A
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
		if(n % 2 && m % 2 == 0){
			cout << "Burenka\n";
		}
		else if(m % 2 && n % 2 == 0){
			cout << "Burenka\n";
		}
		else if(n % 2 && m % 2){
			cout << "Tonya\n";
		}
		else cout << "Tonya\n";
  	}
	return 0;
}