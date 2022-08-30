// Problem: A. Vitaliy and Pie
// Contest: Codeforces - Codeforces Round #297 (Div. 2)
// URL: https://codeforces.com/problemset/problem/525/A
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
  	string s;
  	cin >> s;
  	map<char, ll> mp;
  	ll count = 0;
  	for(ll i = 0; i < s.length(); i++){
  		if(s[i] >= 'a' && s[i] <= 'z'){
  			mp[s[i]]++;
  		}
  		else if(s[i] >= 'A' && s[i] <= 'Z'){
  			char req = tolower(s[i]);
  			if(mp[req] > 0){
  				mp[req]--;
  			}
  			else count++;
  		}
  	}
  	cout << count << "\n";
	return 0;
}