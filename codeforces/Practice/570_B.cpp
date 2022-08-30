// Problem: B. Simple Game
// Contest: Codeforces - Codeforces Round #316 (Div. 2)
// URL: https://codeforces.com/problemset/problem/570/B
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
  	ll left = m - 1, right = n - m;
  	if(left > right){
  		if(m - 1 < 1)m++;
  		cout << m - 1 << "\n";
  	}
  	else if(left < right){
  		if(m + 1 > n)m--;
  		cout << m + 1 << "\n";
  	}
  	else{
  		if(m - 1 < 1)m++;
  		cout << m - 1 << "\n";
  	}
	return 0;
}