// Problem: A. Appleman and Toastman
// Contest: Codeforces - Codeforces Round #263 (Div. 1)
// URL: https://codeforces.com/problemset/problem/461/A
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
  	ll n;
  	cin >> n;
  	vector<ll> v(n, 0);
  	ll sum = 0;
  	for(ll i = 0; i < n; i++){
  		cin >> v[i];
  	}
  	sort(v.begin(), v.end());
  	reverse(v.begin(), v.end());
  	
  	sum += v[0];
  	for(ll i = 1; i < v.size(); i++){
  		sum += v[i];
  		v[i] += v[i - 1];
  		// cout << v[i] << " ";
  		sum += v[i];
  	}
  	cout << sum << "\n";
  	
	return 0;
}