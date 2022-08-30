// Problem: B. Wilbur and Array
// Contest: Codeforces - Codeforces Round #331 (Div. 2)
// URL: https://codeforces.com/problemset/problem/596/B
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
  	ll arr[n], count = 0;
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  		if(i == 0)count += abs(arr[0]);
  		else count += abs(arr[i] - arr[i - 1]);
  	}
  	cout << count << "\n";
  	
	return 0;
}