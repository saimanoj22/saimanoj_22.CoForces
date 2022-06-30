// Problem: B. Rising Sand
// Contest: Codeforces - Codeforces Round #803 (Div. 2)
// URL: https://codeforces.com/contest/1698/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n, k;
		cin >> n >> k;
		ll arr[n];
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
		}
		ll count = 0;
		for(ll i = 1; i < n - 1; i++){
			if(k != 1 && arr[i] > arr[i - 1] + arr[i + 1]){
				count++;
			}
		}
		if(k != 1)cout << count << "\n";
		else{
			if(n % 2 != 0){
				cout << n / 2 << "\n";
			}
			else{
				cout << (n - 1) / 2 << "\n";
			}
		}
  	}
	return 0;
}