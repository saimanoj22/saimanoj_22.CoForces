// Problem: B. Bright, Nice, Brilliant
// Contest: Codeforces - Codeforces Round #822 (Div. 2)
// URL: https://codeforces.com/contest/1734/problem/B
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
		for(ll i = 1; i <= n; i++){
			if(i == 1){
				cout << 1 << "\n";
			}
			else if(i == 2){
				cout << 1 << " " << 1 << "\n";
			}
			else{
				for(ll j = 1; j <= i; j++){
					if(j == 1)cout << 1 << " ";
					else if(j == i)cout << 1 << " ";
					else cout << 0 << " ";
				}
				cout << "\n";
			}
		}
  	}
	return 0;
}