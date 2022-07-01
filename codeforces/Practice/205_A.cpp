// Problem: A. Little Elephant and Rozdil
// Contest: Codeforces - Codeforces Round #129 (Div. 2)
// URL: https://codeforces.com/problemset/problem/205/A
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
  	ll arr[n], min = 1e9, ans = -1;
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  		if(arr[i] < min){
  			min = arr[i];
  			ans = i + 1;
  		}
  	}
  	sort(arr, arr + n);
  	if(n > 1){
	  	if(arr[1] != arr[0]){
	  		cout << ans << "\n";
	  	}
	  	else cout << "Still Rozdil\n";
  	}
  	else if(n == 1){
  		cout << 1 << "\n";
  	}
	return 0;
}