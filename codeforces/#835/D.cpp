// Problem: D. Challenging Valleys
// Contest: Codeforces - Codeforces Round #835 (Div. 4)
// URL: https://codeforces.com/contest/1760/problem/D
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
		ll n;
		cin >> n;
		vector<ll> v(n);
		for(ll i = 0; i < n; i++){
			cin >> v[i];
		}
		ll start = 0;
		while(start < n - 1 && v[start] >= v[start + 1]){
			start++;
		}
		// cout << start << " " << v[start] << "*\n";
		if(start == n - 1){
			cout << "YES\n";
		}
		else{
			while(start < n - 1 && v[start] <= v[start + 1]){
				start++;
			}
			// cout << start << " " << v[start] << "*\n";
			if(start == n - 1){
				cout << "YES\n";
			}
			else{
				cout << "NO\n";
			}
		}
  	}
	return 0;
}