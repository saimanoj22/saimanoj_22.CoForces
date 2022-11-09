// Problem: A. Balanced Rating Changes
// Contest: Codeforces - Codeforces Global Round 5
// URL: https://codeforces.com/contest/1237/problem/A
// Memory Limit: 512 MB
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
  	ll n;
  	cin >> n;
  	ll flag = 1;
  	for(ll i = 0; i < n; i++){
		ll a;
		cin >> a;
		if(a % 2){
			cout << (a + flag) / 2 << "\n";
			flag *= -1;
		}
		else cout << a / 2 << "\n";
  	}
	return 0;
}