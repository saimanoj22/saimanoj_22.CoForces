// Problem: C. Directional Increase
// Contest: Codeforces - Codeforces Round #800 (Div. 2)
// URL: https://codeforces.com/contest/1694/problem/C
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
		ll n;
		cin >> n;
		ll arr[n];
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
		}
		ll sum = 0, flag = 0;
		for(ll i = 0; i < n; i++){
			sum += arr[i];
			if(sum <= 0 && arr[i + 1] != 0){
				ll temp = i + 1;
				while(temp < n){
					if(arr[temp] != 0){
						flag = 1;
						break;
					}
					temp++;
				}
			}
		}
		if(flag == 1){
			cout << "No\n";
		}
		else{
			if(sum == 0){
				cout << "Yes\n";
			}
			else{
				cout << "No\n";
			}
		}
  	}
	return 0;
}