// Problem: A. Maxmina
// Contest: Codeforces - Codeforces Global Round 23
// URL: https://codeforces.com/contest/1746/problem/A
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
		bool flag = false;
		for(ll i = 0; i < n; i++){
			ll a;
			cin >> a;
			if(a == 1)flag = true;
		}
		if(flag)cout << "YES\n";
		else cout << "NO\n";
  	}
	return 0;
}