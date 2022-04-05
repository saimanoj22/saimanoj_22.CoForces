// Problem: B1. Palindrome Game (easy version)
// Contest: Codeforces - Codeforces Round #721 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1527/B1
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
		ll zero = 0;
		for(ll i = 0; i < n; i++){
			if(s[i] == '0')zero++;
		}
		if(n == 1 && s[0] == '1')cout << "DRAW\n";
		else if(zero == 1)cout << "BOB\n";
		else if(zero % 2 != 0)cout << "ALICE\n";
		else cout << "BOB\n";
  	}
	return 0;
}