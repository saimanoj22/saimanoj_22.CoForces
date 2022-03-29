// Problem: A. Digit Game
// Contest: Codeforces - Codeforces Round #671 (Div. 2)
// URL: https://codeforces.com/contest/1419/problem/A
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
		ll raze = 0, breach = 0;
		for(ll i = 0; i < n; i++){
			if(i % 2 == 0){
				if((int(s[i]) - 48) % 2 != 0)raze++;
			}
			else{
				if((int(s[i]) - 48) % 2 == 0)breach++;
			}
		}
		if(n % 2 == 0){
			if(breach > 0)cout << 2 << "\n";
			else cout << 1 << "\n";
		}
		else{
			if(raze > 0)cout << 1 << "\n";
			else cout << 2 << "\n";
		}
  	}
	return 0;
}