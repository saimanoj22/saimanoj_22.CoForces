// Problem: A. Joysticks
// Contest: Codeforces - Codeforces Round #345 (Div. 2)
// URL: https://codeforces.com/contest/651/problem/A
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
  	ll a, b;
  	cin >> a >> b;
  	ll ans = 0;
  	while(1){
  		if(a > b){
  			a -= 2;
  			b++;
  		}
  		else{
  			a++;
  			b -= 2;
  		}
  		if(a >= 0 && b >= 0)ans++;
  		if(a <= 0 || b <= 0){
  			break;
  		}
  	}
  	cout << ans << "\n";
	return 0;
}