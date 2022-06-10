// Problem: A. Everything Everywhere All But One
// Contest: Codeforces - Codeforces Round #794 (Div. 2)
// URL: https://codeforces.com/contest/1686/problem/A
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
		ll flag = 0;
		for(ll i = 0; i < n; i++){
			ll sum = 0;
			for(ll j = 0; j < n; j++){
				if(j != i){
					sum += arr[j];
				}
			}
			ll avg = sum / (n - 1);
			if(sum % (n - 1) == 0){
				if(avg == arr[i]){
					flag = 1;
					break;
				}
			}
		}
		if(flag)cout << "YES\n";
		else cout << "NO\n";
  	}
	return 0;
}