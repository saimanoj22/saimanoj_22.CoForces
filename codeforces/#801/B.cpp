// Problem: B. Circle Game
// Contest: Codeforces - Codeforces Round #801 (Div. 2) and EPIC Institute of Technology Round
// URL: https://codeforces.com/contest/1695/problem/B
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
		ll arr[n], min = 1e9, index = 0;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			if(min > arr[i]){
				min = arr[i];
				index = i;
			}
		}
		if(n % 2 != 0){
			cout << "Mike\n";
		}
		else{
			if(index % 2 == 0)cout << "Joe\n";
			else cout << "Mike\n";
		}
  	}
	return 0;
}