// Problem: A. Bear and Elections
// Contest: Codeforces - Codeforces Round #318 [RussianCodeCup Thanks-Round] (Div. 2)
// URL: https://codeforces.com/problemset/problem/574/A
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
  	ll ans = 0;
  	while(arr[0] <= *max_element(arr + 1, arr + n)){
  		ll index = max_element(arr + 1, arr + n) - arr;
  		arr[index]--;
  		arr[0]++;
  		ans++;
  	}
  	cout << ans << endl;
	return 0;
}