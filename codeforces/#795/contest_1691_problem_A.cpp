// Problem: A. Beat The Odds
// Contest: Codeforces - CodeCraft-22 and Codeforces Round #795 (Div. 2)
// URL: https://codeforces.com/contest/1691/problem/A
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
		ll arr[n], even = 0, odd = 0;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			if(arr[i] % 2 == 0)even++;
			else odd++;
		}
		cout << min(even, odd) << "\n";
  	}
	return 0;
}