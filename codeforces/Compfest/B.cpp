// Problem: B. Basketball Together
// Contest: Codeforces - COMPFEST 14 - Preliminary Online Mirror (Unrated, ICPC Rules, Teams Preferred)
// URL: https://codeforces.com/contest/1725/problem/B
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
  	ll n, d;
  	cin >> n >> d;
  	vector<ll> v(n);
  	for(ll i = 0; i < n; i++){
  		cin >> v[i];
  	}
  	sort(v.begin(), v.end());
  	ll count = 0;
  	for(ll i = n - 1; i >= 0; i--){
  		ll temp = d / v[i];
  		temp++;
  		if(n - temp >= 0){
  			n -= temp;
  			count++;
  		}
  		else break;
  	}
  	cout << count << "\n";
	return 0;
}