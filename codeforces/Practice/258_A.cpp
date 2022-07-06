// Problem: A. Little Elephant and Bits
// Contest: Codeforces - Codeforces Round #157 (Div. 1)
// URL: https://codeforces.com/problemset/problem/258/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
  	ll zero = 0;
  	for(ll i = 0; i < s.length(); i++){
  		if(s[i] == '0')zero++;
  	}
  	if(zero == 0){
  		cout << s.substr(0, s.length() - 1) << "\n";
  	}
  	else{
  		ll flag = 0;
  		for(ll i = 0; i < s.length(); i++){
  			if(s[i] == '0' && flag == 0){
  				flag = 1;
  			}
  			else cout << s[i];
  		}
  		cout << "\n";
  	}
	return 0;
}