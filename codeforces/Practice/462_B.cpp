// Problem: B. Appleman and Card Game
// Contest: Codeforces - Codeforces Round #263 (Div. 2)
// URL: https://codeforces.com/problemset/problem/462/B
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
  	ll n, k;
  	cin >> n >> k;
  	vector<ll> arr (26, 0);
  	string s;
  	cin >> s;
  	for(ll i = 0; i < n; i++){
  		arr[s[i] - 'A']++;
  	}
  	sort(arr.begin(), arr.end(), greater<>());
  	ll sum = 0;
  	for(ll i = 0; i < arr.size(); i++){
  		ll temp = min(arr[i], k);
  		sum += temp*temp;
  		k -= temp;
  	}
  	cout << sum << "\n";
	return 0;
}