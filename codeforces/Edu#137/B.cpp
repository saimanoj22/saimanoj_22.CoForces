// Problem: B. Permutation Value
// Contest: Codeforces - Educational Codeforces Round 137 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1743/problem/B
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n;
		cin >> n;
		for(ll i = 1; i <= n / 2; i++){
			cout << i << " " << n - i + 1 << " ";
		}
		if(n % 2)cout << n / 2 + 1 << " ";
		cout << "\n";
  	}
	return 0;
}