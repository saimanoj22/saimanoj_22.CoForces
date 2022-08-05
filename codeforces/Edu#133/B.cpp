// Problem: B. Permutation Chain
// Contest: Codeforces - Educational Codeforces Round 133 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1716/problem/B
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
		vector<ll> v(n, 0);
		for(ll i = 0; i < n; i++){
			v[i] = i + 1;
		}
		cout << n << "\n";
		for(int i = 0; i < n; i++){
			cout << v[i] << " ";
		}
		cout << "\n";
		swap(v[0], v[n - 1]);
		for(int i = 0; i < n; i++){
			cout << v[i] << " ";
		}
		cout << "\n";
		if(n > 2){
			for(ll i = 0, count = 0; count < n - 2; i++, count++){
				swap(v[i], v[i + 1]);
				for(int i = 0; i < n; i++){
					cout << v[i] << " ";
				}
				cout << "\n";
			}
		}
  	}
	return 0;
}