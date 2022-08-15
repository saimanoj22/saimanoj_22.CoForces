// Problem: B. Vanya and Books
// Contest: Codeforces - Codeforces Round #308 (Div. 2)
// URL: https://codeforces.com/problemset/problem/552/B
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
  	ll n;
  	cin >> n;
  	ll total = 0;
	
	string s = to_string(n);
	ll x = s.length() - 1;
	// cout << x << "\n";

  	while(x >= 0){
		ll books = n - (pow(10, x));
		books++;
		// cout << books << "*\n";
		
		total += books * (x + 1);
		n -= books;
		
		x--;
  	}
  	cout << total << "\n";
	return 0;
}