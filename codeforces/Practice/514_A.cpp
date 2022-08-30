// Problem: A. Chewbaсca and Number
// Contest: Codeforces - Codeforces Round #291 (Div. 2)
// URL: https://codeforces.com/problemset/problem/514/A
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
  	string s;
  	cin >> s;
  	string t = "";
  	for(ll i = 0; i < s.length(); i++){
  		ll digit = s[i] - '0';
  		if(9 - digit < digit){
  			t += (9 - digit) + '0';
  		}
  		else t += s[i];
  	}
	if(t[0] == '0')t[0] = '9';
  	cout << t << "\n";
	return 0;
}