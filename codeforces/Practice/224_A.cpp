// Problem: A. Parallelepiped
// Contest: Codeforces - Codeforces Round #138 (Div. 2)
// URL: https://codeforces.com/problemset/problem/224/A
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
  	ll a, b, c;
  	cin >> a >> b >> c;
  	ll sum = sqrt(a*b/c);
  	sum += sqrt(a*c/b);
  	sum += sqrt(b*c/a);
  	cout << 4 * sum << "\n";
	return 0;
}