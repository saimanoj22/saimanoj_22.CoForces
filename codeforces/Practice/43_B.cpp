// Problem: B. Letter
// Contest: Codeforces - Codeforces Beta Round #42 (Div. 2)
// URL: https://codeforces.com/problemset/problem/43/B
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
  	string s, t;
  	getline(cin, s);
  	getline(cin, t);
  	map<char, ll> smp, tmp;
  	for(ll i = 0; i < s.length(); i++){
  		smp[s[i]]++;
  	}
  	for(ll i = 0; i < t.length(); i++){
  		if(t[i] != ' '){
  			tmp[t[i]]++;
  		}
  	}
  	ll flag = 0;
  	for(auto m: tmp){
  		if(smp[m.first] < m.second){
  			flag = 1;
  			break;
  		}
  	}
  	if(flag)cout << "NO\n";
  	else cout << "YES\n";
	return 0;
}