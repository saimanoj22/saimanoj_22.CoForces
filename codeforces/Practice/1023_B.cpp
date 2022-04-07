// Problem: B. Pair of Toys
// Contest: Codeforces - Codeforces Round #504 (rated, Div. 1 + Div. 2, based on VK Cup 2018 Final)
// URL: https://codeforces.com/problemset/problem/1023/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	/*ll testcases;
	cin >> testcases;
	while(testcases--){

  	}*/
  	ll n, k;
  	cin >> n >> k;
  	if(n >= k){
  		if(k % 2 == 0){
  			cout << (k / 2) - 1 << "\n";
  		}
  		else cout << k / 2 << "\n";
  	}
  	else{
		ll ans = n - (k / 2);
		if(ans < 0)cout << 0 << "\n";
		else cout << ans << "\n";
  	}
	return 0;
}