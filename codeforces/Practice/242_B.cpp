// Problem: B. Big Segment
// Contest: Codeforces - Codeforces Round #149 (Div. 2)
// URL: https://codeforces.com/problemset/problem/242/B
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
  	ll arr[n][2], min = 1e9, max = 0;
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i][0] >> arr[i][1];
  		if(min > arr[i][0])min = arr[i][0];
  		if(max < arr[i][1])max = arr[i][1];
  	}
  	ll flag = 0, index = 0;
  	for(ll i = 0; i < n; i++){
  		if(arr[i][0] <= min && arr[i][1] >= max){
  			flag = 1;
  			index = i;
  			break;
  		}
  	}
  	if(flag == 1){
  		cout << index + 1 << "\n";
  	}
  	else cout << -1 << "\n";
	return 0;
}