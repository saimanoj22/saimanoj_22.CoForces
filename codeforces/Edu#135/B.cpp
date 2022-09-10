// Problem: B. Best Permutation
// Contest: Codeforces - Educational Codeforces Round 135 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1728/problem/B
// Memory Limit: 256 MB
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
		if(n % 2 == 0){
			for(ll i = 2; i <= n - 2; i += 2){
				cout << i << " " << i - 1 << " ";
			}
			cout << n - 1 << " " << n << "\n";
		}
		else{
			cout << 1 << " " << 2 << " " << 3 << " ";
			for(ll i = 5; i <= n - 2; i += 2){
				cout << i << " " << i - 1 << " ";
			}
			cout << n - 1 << " " << n << "\n";
		}
  	}
	return 0;
}