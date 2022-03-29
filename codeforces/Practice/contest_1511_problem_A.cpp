// Problem: A. Review Site
// Contest: Codeforces - Educational Codeforces Round 107 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1511/problem/A
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
		ll arr[n], count = 0;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			if(arr[i] == 1 || arr[i] == 3)count++;
		}
		cout << count << "\n";
  	}
	return 0;
}