// Problem: A. Magic Numbers
// Contest: Codeforces - Codeforces Round #189 (Div. 2)
// URL: https://codeforces.com/problemset/problem/320/A
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
  	ll one = 0, four = 0, other = 0, maxi = 0;
  	for(ll i = 0; i < s.length(); i++){
  		if(s[i] == '1'){
  			one++;
  			four = 0;
  		}
  		else if(s[i] == '4'){
  			four++;
  			if(one == 0 && four > 0){
  				maxi = 3;
  			}
  			maxi = max(maxi , four);
  		}
  		else{
  			other++;
  			four = 0;
  		}
  	}
  	if(other > 0)cout << "NO\n";
  	else{
  		if(maxi > 2)cout << "NO\n";
  		else if(one == 0 && four > 0)cout << "NO\n";
  		else cout << "YES\n";
  	}
	return 0;
}