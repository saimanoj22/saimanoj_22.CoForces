// Problem: B. Petya and Staircases
// Contest: Codeforces - Codeforces Round #212 (Div. 2)
// URL: https://codeforces.com/problemset/problem/362/B
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
  	vector<ll> v(m, 0);
  	ll flag = 0;
  	for(ll i = 0; i < m; i++){
  		cin >> v[i];
  		if(v[i] == 1 || v[i] == n){
  			flag = 1;
  		}
  	}
  	if(flag){
  		cout << "NO\n";
  	}
  	else if(m == 0){
  		cout << "YES\n";
  	}
  	else{
  		sort(v.begin(), v.end());
  		ll check = 0;
  		if(n <= 4){
  			cout << "YES\n";
  		}
  		else if(v.size() <= 2){
  			cout << "YES\n";
  		}
  		else{
  			for(ll i = 0; i <= v.size() - 3; i++){
  				if((v[i + 1] == v[i] + 1) && (v[i + 2] == v[i + 1] + 1)){
  					check = 1;
  					break;
  				}
			}
	  		if(check){
	  			cout << "NO\n";
	  		}
	  		else cout << "YES\n";
  		}
  	} 	
	return 0;
}