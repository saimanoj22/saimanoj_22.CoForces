// Problem: A. Dima and Friends
// Contest: Codeforces - Codeforces Round #167 (Div. 2)
// URL: https://codeforces.com/problemset/problem/272/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	// ll testcases;
	// cin >> testcases;
	// while(testcases--){
  	// }
		ll n;
		cin >> n;
		ll arr[n], sum = 0;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			sum += arr[i];
		}
		ll count = 0;
		for(ll i = 1; i < 6; i++){
			if((sum + i) % (n + 1) != 1)count++;
		}
		cout << count << "\n";
	return 0;
}