// Problem: B. The Fibonacci Segment
// Contest: Codeforces - Codeforces Round #213 (Div. 2)
// URL: https://codeforces.com/problemset/problem/365/B
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
  	ll count = 0, max = 0;
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  		if(i > 1){
  			if(arr[i] == arr[i - 1] + arr[i - 2]){
  				count++;
  			}
  			else{
  				if(max < count + 2){
  					max = count + 2;
  				}
  				count = 0;
  			}
  		}
  	}
	if(max < count + 2){
		max = count + 2;
	}
	if(n < 2)cout << n << "\n";
	else cout << max << "\n";
	return 0;
}