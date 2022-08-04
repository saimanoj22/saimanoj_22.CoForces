// Problem: B. Luke is a Foodie
// Contest: Codeforces - CodeTON Round 2 (Div. 1 + Div. 2, Rated, Prizes!)
// URL: https://codeforces.com/contest/1704/problem/B
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
		ll n, x;
		cin >> n >> x;
		ll arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		ll min = arr[0], max = arr[0], ans = 0;
		for(int i = 1; i < n; i++){
			if(min > arr[i])min = arr[i];
			if(max < arr[i])max = arr[i];
			if(max - min > 2 * x){
				ans++;
				max = arr[i];
				min = arr[i];
			}
		}
		cout << ans << "\n";
  	}
	return 0;
}