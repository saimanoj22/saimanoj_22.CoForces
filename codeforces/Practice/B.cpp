// Problem: B. Little Girl and Game
// Contest: Codeforces - Codeforces Round #169 (Div. 2)
// URL: https://codeforces.com/problemset/problem/276/B
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
  	map<char, ll> mp;
  	for(ll i = 0; i < s.length(); i++){
  		mp[s[i]]++;
  	}
  	ll even = 0, odd = 0;
  	for(auto m : mp){
  		if(m.second % 2 == 0)even++;
  		else odd++;
  	}
  	if(s.length() % 2 == 0){
  		if(odd == 0)cout << "First\n";
  		else if(odd % 2 == 0)cout << "Second\n";
  		else cout << "First\n";
  	}
  	else{
		cout << "First\n";
  	}
	return 0;
}