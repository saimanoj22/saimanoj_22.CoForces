// Problem: B. Xenia and Ringroad
// Contest: Codeforces - Codeforces Round #197 (Div. 2)
// URL: https://codeforces.com/problemset/problem/339/B
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
  	ll n, m;
  	cin >> n >> m;
  	ll arr[m], sum = 0;
  	for(ll i = 0; i < m; i++){
  		cin >> arr[i];
  		if(i == 0){
  			sum += arr[i] - 1;
  		}
  		else{
  			if(arr[i] >= arr[i - 1]){
  				sum += arr[i] - arr[i - 1];
  			}
  			else{
  				sum += n - arr[i - 1];
  				sum += arr[i];
  			}
  		}
  	}
  	cout << sum << "\n";
	return 0;
}