// Problem: B. Magic Stick
// Contest: Codeforces - Educational Codeforces Round 76 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1257/problem/B
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
		ll x, y;
		cin >> x >> y;
		if(x == y){
			cout << "YES\n";
		}
		else if(x > y){
			cout << "YES\n";
		}
		else{
			if(x == 1)cout << "NO\n";
			else if(x == 2){
				if(y == 3)cout << "YES\n";
				else cout << "NO\n";
			}
			else if(x == 3){
				if(y > 3)cout << "NO\n";
				else cout << "YES\n";
			}
			else{
				cout << "YES\n";
			}
		}
  	}
	return 0;
}