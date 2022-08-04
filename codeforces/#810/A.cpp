// Problem: A. Perfect Permutation
// Contest: Codeforces - Codeforces Round #810 (Div. 2)
// URL: https://codeforces.com/contest/1711/problem/A
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
		if(n == 1){
			cout << 1 << "\n";
		}
		else{
			if(n % 2 == 0){
				for(ll i = 1; i <= n; i++){
					if(i % 2){
						cout << i + 1 << " ";
					}
					else cout << i - 1 << " ";
				}
				cout << "\n";
			}
			else{
				for(ll i = 1; i <= n; i++){
					if(i == 1)cout << n << " ";
					else cout << i - 1 << " ";
				}
				cout << "\n";
			}
		}
  	}
	return 0;
}