// Problem: B. Funny Permutation
// Contest: Codeforces - Codeforces Round #826 (Div. 3)
// URL: https://codeforces.com/contest/1741/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
		if(n == 2){
			cout << 2 << " " << 1 << "\n";
		}
		else if(n == 3){
			cout << -1 << "\n";
		}
		else{
			cout << n - 1 << " " << n << " ";
			for(ll i = 1; i < n - 1; i++){
				cout << i << " ";
			}
			cout << "\n";
		}
  	}
	return 0;
}