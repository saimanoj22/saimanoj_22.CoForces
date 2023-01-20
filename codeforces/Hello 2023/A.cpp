// Problem: A. Hall of Fame
// Contest: Codeforces - Hello 2023
// URL: https://codeforces.com/contest/1779/problem/A
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
		ll l = 0, r = 0, index = -1;
		for(ll i = 0; i < n; i++){
			if(s[i] == 'L')l++;
			else r++;
			if(s[i] == 'L' && s[i + 1] == 'R')index = i + 1;
		}
		if(l == 0 || r == 0)cout << -1 << "\n";
		else{
			if(index > 0)cout << index << "\n";
			else cout << 0 << "\n";
		}
  	}
	return 0;
}