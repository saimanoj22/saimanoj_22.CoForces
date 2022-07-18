// Problem: A. Pashmak and Garden
// Contest: Codeforces - Codeforces Round #261 (Div. 2)
// URL: https://codeforces.com/problemset/problem/459/A
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
  	ll a, b, c, d;
  	cin >> a >> b >> c >> d;
  	if(a != c && b != d){
  		ll e, f, g, h;
  		e = a; f = d;
  		g = c; h = b;
  		if(abs(f - b) != abs(a - g)){
  			cout << -1 << "\n";
  		}
  		else {
  			if(abs(a - g) == 0 || abs(f - b) == 0)cout << -1 << "\n";
  			else cout << e << " " << f << " " << g << " " << h << "\n";
  		}
  	}
  	else{
  		ll e, f, g, h;
  		if(a == c){
  			e = a + abs(d - b); f = d;
  			g = a + abs(d - b); h = b;
	  		if(abs(a - g) == 0 || abs(d - b) == 0){
	  			cout << -1 << "\n";
	  		}
	  		else cout << e << " " << f << " " << g << " " << h << "\n";
  		}
  		else{
  			e = a, f = b + abs(a - c);
  			g = c; h = b + abs(a - c);
	  		if(abs(a - c) == 0 || abs(f - b) == 0){
	  			cout << -1 << "\n";
	  		}
	  		else cout << e << " " << f << " " << g << " " << h << "\n";
  		}
  	}
	return 0;
}