// Problem: B. Marin and Anti-coprime Permutation
// Contest: Codeforces - Codeforces Round #779 (Div. 2)
// URL: https://codeforces.com/contest/1658/problem/B
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
		if(n % 2 != 0){
			cout << 0 << "\n";
		}
		else{
			ll pro = 1;
			for(ll i = 1; i <= n / 2; i++){
				pro = pro * i;
				pro = pro % 998244353;
			}
			cout << (pro * pro) % 998244353 << "\n";
		}
  	}
	return 0;
}