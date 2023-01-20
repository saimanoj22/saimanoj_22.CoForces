// Problem: B. Koxia and Permutation
// Contest: Codeforces - Good Bye 2022: 2023 is NEAR
// URL: https://codeforces.com/contest/1770/problem/B
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
		ll n, k;
		cin >> n >> k;
		vector<ll> v(n);
		for(ll i = 0; i < n; i++){
			v[i] = i + 1;
		}
		if(k == 1){
			for(ll i = 0; i < n; i++){
				cout << v[i] << " ";
			}
			cout << "\n";
		}
		else{
			if(n % 2){
				ll j = 1;
				for(ll i = n; i > (n + 1) / 2; i--){
					cout << i << " " << j << " ";
					j++;
				}
				cout << j << " ";
				cout << "\n";
			}
			else{
				ll j = 1;
				for(ll i = n; i > n / 2; i--){
					cout << i << " " << j << " ";
					j++;
				}
				cout << "\n";
			}
		}
  	}
	return 0;
}