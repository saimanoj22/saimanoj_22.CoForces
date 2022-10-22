// Problem: A. Immobile Knight
// Contest: Codeforces - Educational Codeforces Round 136 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1739/problem/A
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
		ll n, m;
		cin >> n >> m;
		if(n == 1 || m == 1){
			cout << 1 << " " << 1 << "\n";
		}
		else if(n == 2){
			if(n > 3){
				cout << 1 << " " << 1 << "\n";
			}
			else cout << 2 << " " << 2 << "\n";
		}
		else if(n == 3){
			if(n > 3){
				cout << 1 << " " << 1 << "\n";
			}
			else{
				cout << 2 << " " << 2 << "\n";
			}
		}
		else cout << 1 << " " << 1 << "\n";
  	}
	return 0;
}