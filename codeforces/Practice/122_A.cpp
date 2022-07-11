// Problem: A. Lucky Division
// Contest: Codeforces - Codeforces Beta Round #91 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/122/A
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
  	ll n;
  	cin >> n;
  	ll ans = -1;
  	for(ll i = 1; i <= 1000; i++){
  		string s = to_string(i);
  		ll four = 0, seven = 0, other = 0;
  		for(ll j = 0; j < s.length(); j++){
  			if(s[j] == '4')four++;
  			else if(s[j] == '7')seven++;
  			else other++;
  		}
  		if(other == 0 && (four > 0 || seven > 0)){
  			if(n % i == 0){
  				ans = i;
  				break;
  			}
  		}
  	}
  	if(ans > 0){
  		cout << "YES\n";
  	}
  	else{
  		cout << "NO\n";
  	}
	return 0;
}