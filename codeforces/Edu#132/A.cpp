// Problem: A. Three Doors
// Contest: Codeforces - Educational Codeforces Round 132 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1709/problem/A
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
		ll x;
		cin >> x;
		ll arr[3];
		cin >> arr[0] >> arr[1] >> arr[2];
		ll flag = 0;
		for(ll i = 0; i < 2; i++){
			if(arr[x - 1] == 0){
				flag = 1;
				break;
			}
			else x = arr[x - 1];
		}
		if(flag)cout << "NO\n";
		else cout << "YES\n";
  	}
	return 0;
}
