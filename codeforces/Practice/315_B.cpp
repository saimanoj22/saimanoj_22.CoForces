// Problem: B. Sereja and Array
// Contest: Codeforces - Codeforces Round #187 (Div. 2)
// URL: https://codeforces.com/problemset/problem/315/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
  	ll n, m;
  	cin >> n >> m;
  	ll arr[n];
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  	}
  	
  	ll sum = 0;
  	vector<ll> v(n, 0);
  	
  	for(ll i = 0; i < m; i++){
  		ll t;
  		cin >> t;
  		if(t == 1){
  			ll a , b;
  			cin >> a >> b;
  			v[a - 1] = -1 * sum;
  			arr[a - 1] = b;
  		}
  		else if(t == 2){
  			ll a;
  			cin >> a;
			sum += a;
  		}
  		else if(t == 3){
  			ll a;
  			cin >> a;
			cout << arr[a - 1] + sum + v[a - 1] << "\n";
  		}
  	}
	return 0;
}