// Problem: E1. Divisible Numbers (easy version)
// Contest: Codeforces - Codeforces Round  #828 (Div. 3)
// URL: https://codeforces.com/contest/1744/problem/E1
// Memory Limit: 256 MB
// Time Limit: 4000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll a, b, c, d;
		cin >> a >> b >> c >> d;
		ll pro = a * b;
		bool flag = false;
		for(ll i = a + 1; i <= c; i++){
			if(pro % __gcd(pro, i) == 0){
				ll y = pro / __gcd(pro, i);
				ll pos = (d / y) * y;
				if(pos > b){
					cout << i << " " << pos << "\n";
					flag = true;
					break;
				}
			}
		}
		if(!flag)cout << -1 << " " << -1 << "\n";
  	}
	return 0;
}