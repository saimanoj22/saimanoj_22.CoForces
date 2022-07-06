// Problem: A. Comparing Strings
// Contest: Codeforces - Codeforces Round #118 (Div. 2)
// URL: https://codeforces.com/problemset/problem/186/A
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
  	cin >> s >> t;
  	if(s.length() != t.length()){
  		cout << "NO\n";
  	}
  	else if(s.length() == 1){
  		if(s == t)cout << "YES\n";
  		else cout << "NO\n";
  	}
  	else{
  		ll count = 0, one = -1, two = -1;
  		for(ll i = 0; i < s.length(); i++){
			if(s[i] != t[i]){
				count++;
				if(one == -1)one = i;
				two = i;
			}
  		}
		if(count != 2)cout << "NO\n";
		else{
			swap(s[one], s[two]);
			if(s == t)cout << "YES\n";
			else cout << "NO\n";
		}
  	}
	return 0;
}