// Problem: A. Factorise N+M
// Contest: Codeforces - Codeforces Round #831 (Div. 1 + Div. 2)
// URL: https://codeforces.com/contest/1740/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

bool isPrime(ll n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)return false;
	}
	return true;
}

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n;
		cin >> n;
		cout << n << "\n";
  	}
	return 0;
}