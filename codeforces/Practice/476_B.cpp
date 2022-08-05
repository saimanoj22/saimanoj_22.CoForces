// Problem: B. Dreamoon and WiFi
// Contest: Codeforces - Codeforces Round #272 (Div. 2)
// URL: https://codeforces.com/problemset/problem/476/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

ll factorial(ll n) {
      if(n == 0)
      return 1;
    ll factorial = 1;
    for (ll i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}
 
ll nCr(ll n, ll r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main(){
	// ll testcases;
	// cin >> testcases;
	// while(testcases--){
  	// }
  	string a, b;
  	cin >> a >> b;
  	ll ap = 0, am = 0, q = 0;
  	double ans = 0;
  	for(ll i = 0; i < a.length(); i++){
  		if(a[i] == '+')ap++;
  		else am++;
  	}
  	for(ll i = 0; i < b.length(); i++){
  		if(b[i] == '+')ap--;
  		else if(b[i] == '?')q++;
  		else am--;
  	}
	if(ap < 0 || am < 0){
			ans = 0;
			cout << setprecision(12) << fixed << ans << "\n";
	}
	else{
		if(ap == 0 && am == 0){
			ans = 1;
			cout << setprecision(12) << fixed << ans << "\n";
		}
		else{
			ll nume = nCr(q, ap);
			double deno = pow(2, q);
			cout << setprecision(12) << fixed << (nume / deno) << "\n";
		}
		
	}
	return 0;
}