// Problem: D. Colorful Stamp
// Contest: Codeforces - Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/D
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
		ll r = 0, b = 0, w = 0, flag = 0;
		for(ll i = 0; i < n; i++){
			if((s[i] == 'W' && i != 0) && ((r > 0) || (b > 0))){
				w++;
				if((r == 0) || (b == 0)){
					flag = 1;
				}
				r = 0;
				b = 0;
			}

			if(s[i] == 'B')b++;
			else if(s[i] == 'R')r++;
		}
		if((r > 0) || (b > 0)){
			if((r == 0) || (b == 0)){
				flag = 1;
			}	
		}
		if(s[0] == 'W')w++;
		if(w == n)flag = 0;
		
		
		if(flag) cout << "NO\n";
		else cout << "YES\n";
  	}
	return 0;
}