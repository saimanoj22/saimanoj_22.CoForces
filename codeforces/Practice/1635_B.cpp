// Problem: B. Avoid Local Maximums
// Contest: Codeforces - Codeforces Round #772 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1635/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n;
		cin >> n;
		ll arr[n], count = 0;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
		}
		for(ll i = 1; i < n - 2; i++){
			if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]){
				arr[i + 1] = max(arr[i], arr[i + 2]);
				count++;
			}
		}
		if(n >= 3){
			if(arr[n - 2] > arr[n - 3] && arr[n - 2] > arr[n - 1]){
				count++;
				arr[n - 2] = max(arr[n - 1], arr[n - 3]);
			}
		}
		cout << count << "\n";
		for(ll i = 0; i < n; i++){
			cout << arr[i] << " ";
		}
		cout << "\n";
  	}
	return 0;
}