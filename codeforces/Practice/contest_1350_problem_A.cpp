// Problem: A. Orac and Factors
// Contest: Codeforces - Codeforces Round #641 (Div. 2)
// URL: https://codeforces.com/contest/1350/problem/A
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
		ll n, k;
		cin >> n >> k;
		if(n % 2 == 0){
			n += 2 * k;
		}
		else{
			ll flag = 0;
			for(ll i = 2; i <= n; i++){
				if(n % i == 0){
					flag = i;
					break;
				}
			}
			n += flag + (2 * (k - 1));
		}
		cout << n << "\n";
  	}
	return 0;
}