// Problem: A. Polo the Penguin and Strings
// Contest: Codeforces - Codeforces Round #177 (Div. 1)
// URL: https://codeforces.com/problemset/problem/288/A
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
  	if(n >= k){
  		if(k == 1){
  			if(n > 1)cout << -1 << "\n";
  			else cout << 'a' << "\n";
  		}
  		else{
  			for(ll i = 0; i < n - k + 2; i++){
  				if(i % 2)cout << 'b' << "";
  				else cout << 'a' << "";
  			}
  			char ch = 'c';
  			for(ll i = 0; i < k - 2; i++){
  				cout << ch << "";
  				ch++;
  			}
  		}
  	}
  	else{
  		cout << -1 << "\n";
  	}
	return 0;
}