// Problem: C. Advantage
// Contest: Codeforces - Codeforces Round #835 (Div. 4)
// URL: https://codeforces.com/contest/1760/problem/C
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
		vector<ll> v(n), a(n);
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			a[i] = v[i];
		}
		sort(v.begin(), v.end());
		for(ll i = 0; i < n; i++){
			if(a[i] == v[n - 1]){
				cout << a[i] - v[n - 2] << " ";
			}
			else{
				cout << a[i] - v[n - 1] << " ";
			}
		}
		cout << "\n";
  	}
	return 0;
}