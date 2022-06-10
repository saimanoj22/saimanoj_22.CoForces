// Problem: C. Circular Local MiniMax
// Contest: Codeforces - Codeforces Round #794 (Div. 2)
// URL: https://codeforces.com/contest/1686/problem/C
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
		sort(arr, arr+n);
		if(n % 2 != 0)cout << "NO\n";
		else{
			ll temp = n / 2, flag = 0;
			if(arr[0] == arr[n + 1] || arr[0] == arr[n])flag = 1;
			for(ll i = 1; i < temp; i++){
				if(arr[i] == arr[i + temp] || arr[i] == arr[i + temp - 1]){
					flag = 1;
					break;
				}
			}
			if(flag)cout << "NO\n";
			else{
				cout << "YES\n";
				for(ll i = 0, j = temp; i < temp; i++, j++){
					cout << arr[i] << " " << arr[j] << " ";
				}
				cout << "\n";
			}
		}
  	}
	return 0;
}