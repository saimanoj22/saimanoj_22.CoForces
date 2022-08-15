// Problem: A. Sockets
// Contest: Codeforces - Codeforces Round #159 (Div. 2)
// URL: https://codeforces.com/problemset/problem/257/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	// ll testcases;
	// cin >> testcases;
	// while(testcases--){
  	// }
  	ll n, m, k;
  	cin >> n >> m >> k;
  	vector<ll> v(n, 0);
  	for(ll i = 0; i < n; i++){
  		cin >> v[i];
  	}
  	sort(v.begin(), v.end(), greater<>());
  	for(ll i = 1; i < n; i++){
  		v[i] += v[i - 1];
  	}
  	
	if(k >= m){
		cout << 0 << "\n";
	}
	else{
		k--;
		m -= k;
		bool flag = false;
		ll index = -1;
		for(ll i = 0; i < n; i++){
			if((v[i] - i) >= m){
				flag = true;
				index = i + 1;
				break;
			}
		}
		if(flag){
			cout << index << "\n";
		}
		else cout << -1 << "\n";
	}
  	
	return 0;
}