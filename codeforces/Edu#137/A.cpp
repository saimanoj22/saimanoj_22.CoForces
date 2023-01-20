// Problem: A. Password
// Contest: Codeforces - Educational Codeforces Round 137 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1743/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

ll fact(ll n){
	ll pro = 1;
	while(n > 0){
		pro *= n;
		n--;
	}
	return pro;
}

ll nCr(ll n, ll r){
	return fact(n) / (fact(r) * fact(n - r));
}

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n;
		cin >> n;
		for(ll i = 0; i < n; i++){
			ll a;
			cin >> a;
		}
		ll rem = 10 - n;
		ll pick = nCr(rem, 2);
		cout << pick * 6 << "\n";
  	}
	return 0;
}