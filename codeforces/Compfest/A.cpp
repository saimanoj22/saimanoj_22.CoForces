// Problem: A. Accumulation of Dominoes
// Contest: Codeforces - COMPFEST 14 - Preliminary Online Mirror (Unrated, ICPC Rules, Teams Preferred)
// URL: https://codeforces.com/contest/1725/problem/A
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
  	ll n, m;
  	cin >> n >> m;
  	if(m == 1){
  		cout << n - 1 << "\n";
  	}
  	else{
  		cout << (m - 1) * n << "\n";
  	}
	return 0;
}