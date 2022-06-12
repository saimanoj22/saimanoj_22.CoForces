// Problem: C. awoo's Favorite Problem
// Contest: Codeforces - Educational Codeforces Round 130 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1697/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
		string s, t;
		cin >> s;
		cin >> t;
		
		ll flag = 0;
		for(ll i = 0; i < n; i++){
			if(s[i] == 'a' && t[i] == 'b'){
				ll j = i + 1;
				while(s[j] == 'a'){
					j++;
				}
				if(s[j] == 'b'){
					swap(s[i], s[j]);
				}
				else if(s[j] == 'c'){
					flag = 1;
					break;
				}
			}
			else if(s[i] == 'b' && t[i] == 'c'){
				ll j = i + 1;
				while(s[j] == 'b'){
					j++;
				}
				if(s[j] == 'c'){
					swap(s[i], s[j]);
				}
				else if(s[j] == 'a'){
					flag = 1;
					break;
				}
			}
		}
		if(flag == 1){
			cout << "NO\n";
		}
		else{
			if(s == t)cout << "YES\n";
			else cout << "NO\n";
		}
		
  	}
	return 0;
}