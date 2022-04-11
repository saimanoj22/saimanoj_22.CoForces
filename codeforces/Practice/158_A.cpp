// Problem: A. Next Round
// Contest: Codeforces - VK Cup 2012 Qualification Round 1
// URL: https://codeforces.com/problemset/problem/158/A
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	/*ll testcases;
	cin >> testcases;
	while(testcases--){

  	}*/
		ll n, k;
		cin >> n >> k;
		ll arr[n];
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
		}
		ll count = 0;
		for(ll i = 0; i < n; i++){
			if(arr[i] >= arr[k - 1] && arr[i] > 0)count++;
		}
		cout << count << "\n";
	return 0;
}