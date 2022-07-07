// Problem: A. Two Bags of Potatoes
// Contest: Codeforces - Codeforces Round #148 (Div. 2)
// URL: https://codeforces.com/problemset/problem/239/A
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
  	ll y, k, n;
  	cin >> y >> k >> n;
  	vector<ll> v;
  	ll rem = y % k, start = 0;
  	if(rem == 0){
  		start = y + k;
  	}
  	else{
  		start = y + (k - rem);
  	}
	if(n >= start){
	  	for(ll i = start; i <= n; i += k){
			cout << i - y << " ";
	  	}
	  	cout << "\n";	
	}
	else{
		cout << -1 << "\n";
	}
	return 0;
}