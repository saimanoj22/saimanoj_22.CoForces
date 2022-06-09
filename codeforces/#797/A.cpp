// Problem: A. Print a Pedestal (Codeforces logo?)
// Contest: Codeforces - Codeforces Round #797 (Div. 3)
// URL: https://codeforces.com/contest/1690/problem/A
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
		ll a = n / 3, b, c;
		if(n % 3 == 0){
			a = n / 3;
		}
		else{
			a = (n / 3) + 1;
		}
		a += 1;
		b = a - 1;
		c = n - (a + b);
		if(n == 7){
			cout << 2 << " " << 4 << " " << 1 << "\n";
		}
		else cout << b << " " << a << " " << c << "\n";
  	}
	return 0;
}