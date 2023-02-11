// Problem: G1. Teleporters (Easy Version)
// Contest: Codeforces - Codeforces Round #849 (Div. 4)
// URL: https://codeforces.com/contest/1791/problem/G1
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
		ll n, c;
		cin >> n >> c;
		vector<ll> v(n), w(n);
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			w[i] = v[i] + i + 1;
		}
		sort(w.begin(), w.end());
		ll sum = 0, count = 0;
		for(ll i = 0; i < n; i++){
			if(sum + w[i] > c){
				break;
			}
			else{
				sum += w[i];
				count++;
			}
		}
		// cout << sum << " ";
		cout << count << "\n";
  	}
	return 0;
}