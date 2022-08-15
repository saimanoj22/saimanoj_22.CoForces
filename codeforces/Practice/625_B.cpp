// Problem: B. War of the Corporations
// Contest: Codeforces - Codeforces Round #342 (Div. 2)
// URL: https://codeforces.com/problemset/problem/625/B
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
  	string s, t;
  	cin >> s >> t;
  	ll count = 0;
  	if(s.length() >= t.length()){
	  	for(ll i = 0; i <= s.length() - t.length(); i++){
			string temp = s.substr(i, t.length());
			if(temp == t){
				count++;
				s[t.length() - 1 + i] = '#';
			}
	  	}
	  	cout << count << "\n";
  	}
  	else cout << 0 << "\n";
	return 0;
}