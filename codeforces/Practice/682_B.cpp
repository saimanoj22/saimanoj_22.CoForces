// Problem: B. Alyona and Mex
// Contest: Codeforces - Codeforces Round #358 (Div. 2)
// URL: https://codeforces.com/problemset/problem/682/B
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
  	ll n;
  	cin >> n;
  	vector<ll> v(n, 0);
  	for(ll i = 0; i < n; i++){
  		cin >> v[i];
  	}
  	sort(v.begin(), v.end());
  	ll check = 1;
  	for(ll i = 0; i < n; i++){
  		if(v[i] != check){
  			if(v[i] > check){
  				v[i] = check;
  				check++;
  			}
  		}
  		else{
  			check++;
  		}
  	}
  	cout << check << "\n";
	return 0;
}