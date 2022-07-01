// Problem: A. Little Elephant and Function
// Contest: Codeforces - Codeforces Round #136 (Div. 2)
// URL: https://codeforces.com/problemset/problem/221/A
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
  	ll n;
  	cin >> n;
  	if(n == 1){
  		cout << 1 << "\n";
  	}
  	else{
  		for(ll i = 1; i <= n; i++){
  			if(i == 1)cout << n << " ";
  			else cout << i - 1 << " ";
  		}
  		cout << "\n";
  	}
	return 0;
}