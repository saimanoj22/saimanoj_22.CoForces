// Problem: A. Beautiful Matrix
// Contest: Codeforces - Codeforces Round #161 (Div. 2)
// URL: https://codeforces.com/problemset/problem/263/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	// ll testcases;
	// cin >> testcases;
	// while(testcases--){
  	// }
		ll x = -1, y = -1;
		for(ll i = 0; i < 5; i++){
			for(ll j = 0; j < 5; j++){
				ll temp;
				cin >> temp;
				if(temp == 1){
					x = i + 1;
					y = j + 1;
				}
			}
		}
		cout << (abs(x - 3) + abs(y - 3)) << "\n";
	return 0;
}