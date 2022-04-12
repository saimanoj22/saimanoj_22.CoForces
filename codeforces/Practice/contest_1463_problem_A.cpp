// Problem: A. Dungeon
// Contest: Codeforces - Educational Codeforces Round 100 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1463/problem/A
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
		ll a, b, c;
		cin >> a >> b >> c;
		ll sum = a + b + c;
		if(sum % 9 != 0){
			cout << "NO\n";
		}
		else{
			ll mini = min(a, b);
			mini = min(mini, c);
			if(mini < sum / 9){
				cout << "NO\n";
			}
			else{
				cout << "YES\n";
			}
		}
		
  	}
	return 0;
}