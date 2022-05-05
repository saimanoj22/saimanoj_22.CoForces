// Problem: B. Make It Increasing
// Contest: Codeforces - Codeforces Round #787 (Div. 3)
// URL: https://codeforces.com/contest/1675/problem/B
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
		ll arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}	
		ll count = 0, flag = 0;
		for(ll i = n - 1; i > 0; i--){
			while(arr[i-1] >= arr[i]){
				if(arr[i] == 0 && i != 0){
					flag = 1;
					break;
				}
				arr[i-1] /= 2;
				count++;
			}
		}
		if(flag == 1) cout << -1 << "\n";
		else cout << count << "\n";	
  	}
	return 0;
}