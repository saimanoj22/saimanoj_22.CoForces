// Problem: B. Following Directions
// Contest: Codeforces - Codeforces Round #849 (Div. 4)
// URL: https://codeforces.com/contest/1791/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n;
		cin >> n;
		string s;
		cin >> s;
		ll x = 0, y = 0;
		bool flag = false;
		for(ll i = 0; i < n; i++){
			if(s[i] == 'U'){
				y++;
			}
			else if(s[i] == 'L'){
				x--;
			}
			else if(s[i] == 'R'){
				x++;
			}
			else if(s[i] == 'D'){
				y--;
			}
			if(x == 1 && y == 1){
				flag = true;
				break;
			}
		}
		if(flag)cout << "YES\n";
		else cout << "NO\n";
  	}
	return 0;
}