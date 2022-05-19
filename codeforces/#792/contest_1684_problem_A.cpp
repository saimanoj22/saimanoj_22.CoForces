// Problem: A. Digit Minimization
// Contest: Codeforces - Codeforces Round #792 (Div. 1 + Div. 2)
// URL: https://codeforces.com/contest/1684/problem/A
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
		string s;
		cin >> s;
		ll n = s.length(), min = INT_MAX;
		for(ll i = 0; i < n; i++){
			if(min > (s[i] - '0'))min = s[i] - '0';
		}
		if(n == 2 && (s[0] - '0') == min){
			cout << s[1] << "\n";
		}
		else{
			cout << min << "\n";
		}
  	}
	return 0;
}