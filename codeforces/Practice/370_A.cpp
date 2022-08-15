// Problem: A. Rook, Bishop and King
// Contest: Codeforces - Codeforces Round #217 (Div. 2)
// URL: https://codeforces.com/problemset/problem/370/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
	ll x, y, a, b;
	cin >> x >> y >> a >> b;
	
	if(x == a || y == b){
		cout << 1 << " ";
	}
	else{
		cout << 2 << " ";
	}
	if((x + a) % 2 == (y + b) % 2){		
		if(x + y == a + b){
			cout << 1 << " ";
		}
		else if(x - y == a - b){
			cout << 1 << " ";
		}
		else cout << 2 << " ";
	}
	else{
		cout << 0 << " ";
	}
	cout << max(abs(x - a), abs(y - b)) << "\n";
	return 0;
}