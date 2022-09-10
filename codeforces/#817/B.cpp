// Problem: B. Colourblindness
// Contest: Codeforces - Codeforces Round #817 (Div. 4)
// URL: https://codeforces.com/contest/1722/problem/B
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
		string s, t;
		cin >> s >> t;
		bool flag = false;
		for(ll i = 0; i < n; i++){
			if(s[i] != t[i]){
				if(s[i] == 'R' || t[i] == 'R'){
					flag = true;
				}
			}
		}
		if(flag)cout << "NO\n";
		else cout << "YES\n";
  	}
	return 0;
}