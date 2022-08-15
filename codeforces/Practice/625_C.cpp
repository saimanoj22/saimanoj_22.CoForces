// Problem: C. K-special Tables
// Contest: Codeforces - Codeforces Round #342 (Div. 2)
// URL: https://codeforces.com/problemset/problem/625/C
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
  	ll n, k;
  	cin >> n >> k;
  	ll a = 1, b = (n * (k - 1)) + 1;
  	ll sum = 0, temp = b;
  	for(ll i = 0; i < n; i++){
  		sum += temp;
  		temp += (n - k + 1);
  	}
  	cout << sum << "\n";
	for(ll i = 0; i < n; i++){
		for(ll j = 1; j < k; j++){
			cout << a << " ";
			a++;
		}
		for(ll j = k; j <= n; j++){
			cout << b << " ";
			b++;
		}
		cout << "\n";
	}
	return 0;
}