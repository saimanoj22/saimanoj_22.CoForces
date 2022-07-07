// Problem: B. Shower Line
// Contest: Codeforces - Codeforces Round #247 (Div. 2)
// URL: https://codeforces.com/problemset/problem/431/B
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
  	ll arr[5][5];
  	for(ll i = 0; i < 5; i++){
  		for(ll j = 0; j < 5; j++){
  			cin >> arr[i][j];
  		}
  	}
	ll brr[5] = {1, 2, 3, 4, 5};
	ll sum = 0, max = 0;
	for(ll i = 0; i < 4; i++){
		sum += arr[brr[i] - 1][brr[i + 1] - 1];
		sum += arr[brr[i + 1] - 1][brr[i] - 1];
	}
	for(ll i = 2; i < 4; i++){
		sum += arr[brr[i] - 1][brr[i + 1] - 1];
		sum += arr[brr[i + 1] - 1][brr[i] - 1];
	}
	if(max < sum){
		max = sum;
	}
	sum = 0;
	while(next_permutation(brr, brr + 5)){
		for(ll i = 0; i < 4; i++){
			sum += arr[brr[i] - 1][brr[i + 1] - 1];
			sum += arr[brr[i + 1] - 1][brr[i] - 1];
		}
		for(ll i = 2; i < 4; i++){
			sum += arr[brr[i] - 1][brr[i + 1] - 1];
			sum += arr[brr[i + 1] - 1][brr[i] - 1];
		}
		if(max < sum){
			max = sum;
		}
		sum = 0;
	}
	cout << max << "\n";

	return 0;
}