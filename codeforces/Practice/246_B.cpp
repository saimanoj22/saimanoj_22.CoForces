// Problem: B. Increase and Decrease
// Contest: Codeforces - Codeforces Round #151 (Div. 2)
// URL: https://codeforces.com/problemset/problem/246/B
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
  	ll arr[n];
  	ll sum = 0;
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  		sum += arr[i];
  	}
	if(sum % n == 0){
		cout << n << "\n";
	}
	else{
		cout << n - 1 << "\n";
	}
	return 0;
}