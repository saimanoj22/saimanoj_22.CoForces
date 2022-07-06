// Problem: B. Sail
// Contest: Codeforces - Codeforces Round #180 (Div. 2)
// URL: https://codeforces.com/problemset/problem/298/B
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
  	ll n, a, b, c, d;
  	cin >> n >> a >> b >> c >> d;
  	string s;
  	cin >> s;
  	ll x = c - a, y = d - b;
  	ll ea = 0, we = 0, no = 0, so= 0, ans = -1;;
  	if(x > 0)ea = x;
  	else we = -1 * x;
  	if(y > 0)no = y;
  	else so = -1 * y;
  	for(ll i = 0; i < n; i++){
  		if(s[i] == 'E' && ea > 0)ea--;
  		else if(s[i] == 'W' && we > 0)we--;
  		else if(s[i] == 'N' && no > 0)no--;
  		else if(s[i] == 'S' && so > 0)so--;
  		if(ea == 0 && we == 0 && no == 0 && so == 0){
  			ans = i + 1;
  			break;
  		}
  	}
  	if(ans == -1)cout << -1 << "\n";
  	else cout << ans << "\n";
	return 0;
}