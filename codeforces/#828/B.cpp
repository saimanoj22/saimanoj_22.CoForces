// Problem: B. Even-Odd Increments
// Contest: Codeforces - Codeforces Round  #828 (Div. 3)
// URL: https://codeforces.com/contest/1744/problem/B
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
		ll n, q;
		cin >> n >> q;
		vector<ll> v(n);
		ll odd = 0, even = 0, sum = 0;
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			sum += v[i];
			if(v[i] % 2)odd++;
			else even++;
		}
		for(ll i = 0; i < q; i++){
			ll t, x; 
			cin >> t >> x;
			if(t == 0){
				if(x % 2){
					sum += (even * x);
					odd += even;
					even = 0;
				}
				else{
					sum += (even * x);
				}
			}
			else{
				if(x % 2){
					sum += (odd * x);
					even += odd;
					odd = 0;
				}
				else{
					sum += (odd * x);
				}
			}
			cout << sum << "\n";
		}
  	}
	return 0;
}