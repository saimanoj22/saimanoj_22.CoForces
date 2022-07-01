// Problem: A. Even Odds
// Contest: Codeforces - Codeforces Round #188 (Div. 2)
// URL: https://codeforces.com/problemset/problem/318/A
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
  	ll n, x;
  	cin >> n >> x;
  	if(n % 2 == 0){
  		if(x <= n / 2){
  			cout << 2 * x - 1 << "\n";
  		}
  		else{
  			x = x - n / 2;
  			cout << 2 * x << "\n";
  		}
  	}
  	else{
  		if(x <= n / 2 + 1){
  			cout << 2 * x - 1 << "\n";
  		}
  		else{
  			x -= n / 2 + 1;
  			cout << 2 * x << "\n";
  		}
  	}
	return 0;
}