// Problem: A. Lucky Conversion
// Contest: Codeforces - Codeforces Round #104 (Div. 1)
// URL: https://codeforces.com/problemset/problem/145/A
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
  	ll a = 0, b = 0;
  	for(ll i = 0; i < s.length(); i++){
  		if(s[i] == '7' && t[i] == '4'){
  			a++;
  		}
  		else if(s[i] == '4' && t[i] == '7'){
  			b++;
  		} 
  	}
  	// cout << a << " " << b << "\n";
  	ll mini = min(a, b);
  	ll ans = 0;
  	ans += mini;
  	a -= mini;
  	b -= mini;
  	ans += a;
  	ans += b;
  	cout << ans << "\n";
	return 0;
}