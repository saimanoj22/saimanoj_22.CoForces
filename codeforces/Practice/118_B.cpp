// Problem: B. Present from Lena
// Contest: Codeforces - Codeforces Beta Round #89 (Div. 2)
// URL: https://codeforces.com/problemset/problem/118/B
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
  	for(ll i = 1; i <= 2 * n + 1; i++){
  		ll temp;
  		if(i <= n + 1){
  			temp = i;
  		}
  		else{
  			temp = abs(2 * n + 2 - i);
  		}
  		for(ll j = 1; j <= 2 * (n + 1 - temp); j++){
  			cout << " ";
  		}
  		for(ll j = 0, count = 0; count < 2 * temp - 2; count++){
  			if(j < temp - 1)cout << j << " ";
  			else cout << abs(2 * temp - 2 - j) << " ";
  			j++;
  		}
  		cout << 0;
  		cout << "\n";
  	}
	return 0;
}