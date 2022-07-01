// Problem: A. Chat room
// Contest: Codeforces - Codeforces Beta Round #54 (Div. 2)
// URL: https://codeforces.com/problemset/problem/58/A
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
  	string s;
  	cin >> s;
  	ll h = 0, e = 0, l = 0, o = 0;
  	for(ll i = 0; i < s.length(); i++){
		if(s[i] == 'h'){
			h++;
		}
		if(s[i] == 'e' && h > 0){
			e++;
		}
		if(s[i] == 'l' && e > 0){
			l++;
		}
		if(s[i] == 'o' && l > 1){
			o++;
		}
  	}
  	if(o > 0)cout << "YES\n";
  	else cout << "NO\n";
	return 0;
}