// Problem: B. T-primes
// Contest: Codeforces - Codeforces Round #142 (Div. 2)
// URL: https://codeforces.com/problemset/problem/230/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

bool isPrime(int n){
	if(n <= 1)return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)return false;
	}
	return true;
}

int main(){
	// ll testcases;
	// cin >> testcases;
	// while(testcases--){
  	// }
  	ll n;
  	cin >> n;
  	for(ll i = 0; i < n; i++){
		ll a;
		cin >> a;
		ll root = sqrt(a);
		if(root * root == a && isPrime(root)){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
  	}
	return 0;
}