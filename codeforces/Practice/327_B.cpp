// Problem: B. Hungry Sequence
// Contest: Codeforces - Codeforces Round #191 (Div. 2)
// URL: https://codeforces.com/problemset/problem/327/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

bool isPrime(int n){
	if(n == 1)return false;
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
  	for(ll i = 1, count = 0; count < n; i++){
  		if(isPrime(i)){
  			cout << i << " ";
  			count++;
  		}
  	}
  	cout << "\n";
	return 0;
}