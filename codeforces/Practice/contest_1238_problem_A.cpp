// Problem: A. Prime Subtraction
// Contest: Codeforces - Educational Codeforces Round 74 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1238/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

bool isPrime(ll n){
	for(ll i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll x, y;
		cin >> x >> y;
		ll diff = x - y;
		if(diff == 1){
			cout << "NO\n";
		}
		else{
			cout << "YES\n";
		}
  	}
	return 0;
}