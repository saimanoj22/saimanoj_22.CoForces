// Problem: B. MKnez's ConstructiveForces Task
// Contest: Codeforces - Hello 2023
// URL: https://codeforces.com/contest/1779/problem/B
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
		if(n % 2){
			if(n == 3){
				cout << "NO\n";
			}
			else{
				cout << "YES\n";
				ll x = (3 - n) / 2;
				ll y = 1 - x;
				for(ll i = 1; i <= n / 2; i++){
					cout << x << " " << y << " ";
				}
				cout << x << "\n";
			}
		}
		else{
			cout << "YES\n";
			for(ll i = 1; i <= n / 2; i++){
				cout << 1 << " " << -1 << " ";
			}
			cout << "\n";
		}
  	}
	return 0;
}