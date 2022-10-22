// Problem: B. Rule of League
// Contest: Codeforces - Codeforces Round #821 (Div. 2)
// URL: https://codeforces.com/contest/1733/problem/B
// Memory Limit: 256 MB
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
		ll n, x, y;
		cin >> n >> x >> y;
		if(x == 0 && y == 0){
			cout << -1 << "\n";
		}
		else if(x != 0 && y != 0){
			cout << -1 << "\n";
		}
		else{
			x = x + y;
			ll check = n - x - 1;
			if(check % x == 0){
				for(ll i = 0; i < x; i++){
					cout << 1 << " ";
				}
				ll temp = 1 + (x + 1);
				while(temp <= n){
					for(ll i = 0; i < x; i++){
						cout << temp << " ";
					}
					temp += x;
				}
				cout << "\n";
			}
			else{
				cout << -1 << "\n";
			}
		}
  	}
	return 0;
}