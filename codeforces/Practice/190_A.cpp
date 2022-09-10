// Problem: A. Vasya and the Bus
// Contest: Codeforces - Codeforces Round #120 (Div. 2)
// URL: https://codeforces.com/problemset/problem/190/A
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
  	ll g, c;
  	cin >> g >> c;
  	if(g == 0 && c == 0){
  		cout << 0 << " " << 0 << "\n";
  		return 0;
  	}
  	if(g == 0){
  		cout << "Impossible\n";
  		return 0;
  	}
  	if(c == 0){
  		cout << g << " " << g << "\n";
  		return 0;
  	}
	if(g >= c){
		ll maxi = c - 1 + g;
		ll mini = g;
		cout << mini << " " << maxi << "\n";
	}
	else{
		ll maxi = c - 1 + g;
		ll mini = g + (c - g);
		cout << mini << " " << maxi << "\n";
	}
  	
	return 0;
}