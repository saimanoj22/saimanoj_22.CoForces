// Problem: A. Two Groups
// Contest: Codeforces - Codeforces Round #832 (Div. 2)
// URL: https://codeforces.com/contest/1747/problem/A
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
		ll po = 0, ne = 0;
		for(ll i = 0; i < n; i++){
			ll x; 
			cin >> x;
			if(x > 0)po += x;
			else ne += abs(x - 0);
		}
		cout << abs(po - ne) << "\n";
  	}
	return 0;
}