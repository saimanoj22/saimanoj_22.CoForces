// Problem: A. Translation
// Contest: Codeforces - Codeforces Beta Round #40 (Div. 2)
// URL: https://codeforces.com/problemset/problem/41/A
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
  	string s, t;
  	cin >> s >> t;
  	reverse(t.begin(), t.end());
  	if(s == t)cout << "YES\n";
  	else cout << "NO\n";
	return 0;
}