// Problem: B. Roma and Changing Signs
// Contest: Codeforces - Codeforces Round #160 (Div. 2)
// URL: https://codeforces.com/problemset/problem/262/B
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
		ll n , k;
		cin >> n >> k;
		ll arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			if(arr[i] < 0 && k > 0){
				arr[i] = -1 * arr[i];
				k--;
			}
		}
		if(k > 0){
			sort(arr, arr + n);
			if(k % 2 != 0){
				arr[0] = -1 * arr[0];
			}
		}
		ll sum = 0;
		for(ll i = 0; i < n; i++){
			sum += arr[i];
		}
		cout << sum << "\n";
	return 0;
}