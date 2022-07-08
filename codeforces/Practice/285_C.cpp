// Problem: C. Building Permutation
// Contest: Codeforces - Codeforces Round #175 (Div. 2)
// URL: http://codeforces.com/problemset/problem/285/C
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
  	ll arr[n];
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  	}
  	sort(arr, arr + n);
  	ll sum = 0;
  	for(ll i = 0; i < n; i++){
  		sum += abs(arr[i] - (i + 1));
  	}
  	cout << sum << "\n";
	return 0;
}