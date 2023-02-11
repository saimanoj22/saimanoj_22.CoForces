// Problem: A. Indirect Sort
// Contest: Codeforces - CodeTON Round 3 (Div. 1 + Div. 2, Rated, Prizes!)
// URL: https://codeforces.com/contest/1750/problem/A
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
		vector<ll> v(n);
		for(ll i = 0; i < n; i++){
			cin >> v[i];
		}
		if(v[0] == 1)cout << "Yes\n";
		else cout << "No\n";
  	}
	return 0;
}