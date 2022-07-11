// Problem: A. Slightly Decreasing Permutations
// Contest: Codeforces - Codeforces Round #175 (Div. 2)
// URL: https://codeforces.com/problemset/problem/285/A
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
  	ll n, k;
  	cin >> n >> k;
  	for(ll i = n, count = 0; count < k; i--,count++){
  		cout << i << " ";
  	}
  	for(ll i = 1; i <= n - k; i++){
  		cout << i << " ";
  	}
  	cout << "\n";
	return 0;
}