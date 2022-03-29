// Problem: A. Nastia and Nearly Good Numbers
// Contest: Codeforces - Codeforces Round #720 (Div. 2)
// URL: https://codeforces.com/contest/1521/problem/A
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
		if(b == 1){
			cout << "NO\n";
		}
		else{
			if(a != a*(b - 1) && a*(b - 1) !=  a * b && a * b != a){
				cout << "YES\n";
				cout << a << " " << a*(b - 1) << " " << a * b << "\n";
			}
			else{
				cout << "YES\n";
				cout << a << " " << a*(b + 1) << " " << a * b * 2 << "\n";
			}
		}
  	}
	return 0;
}