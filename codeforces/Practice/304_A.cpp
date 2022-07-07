// Problem: A. Pythagorean Theorem II
// Contest: Codeforces - Codeforces Round #183 (Div. 2)
// URL: https://codeforces.com/problemset/problem/304/A
// Memory Limit: 256 MB
// Time Limit: 3000 ms
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
  	ll count = 0;
  	for(ll i = 1; i < n; i++){
  		for(ll j = i + 1; j < n; j++){
  			ll c = (i * i) + (j * j);
  			ll root = sqrt(c);
  			if(root * root == c && root <= n)count++;
  		}
  	}
  	cout << count << "\n";
	return 0;
}