// Problem: B. Random Teams
// Contest: Codeforces - Codeforces Round #273 (Div. 2)
// URL: https://codeforces.com/contest/478/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

ll nCr(ll n, ll r) {
	if(n < r)return 0;
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    ll ans = 1;

    for(ll i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}

int main(){
	/*ll testcases;
	cin >> testcases;
	while(testcases--){

  	}*/
  	ll n, m;
  	cin >> n >> m;
		ll div = n / m;
		ll rem = n % m;
		ll divRem = m - rem;
		ll a = nCr((div + 1), 2) * rem;
		ll b = nCr(div, 2)* divRem;
		ll min = a + b;
		
	  	ll maxNum = n - m + 1;
	  	ll max = nCr(maxNum, 2);
	  	
	  	cout << min << " " << max << "\n";
  	
	return 0;
}