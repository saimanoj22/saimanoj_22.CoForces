// Problem: A. Wonderful Permutation
// Contest: Codeforces - Codeforces Round #813 (Div. 2)
// URL: https://codeforces.com/contest/1712/problem/A
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
		ll n, k;
		cin >> n >> k;
		ll arr[n], count = 0;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			if(arr[i] > k && i < k)count++;
		}
		cout << count << "\n";
  	}
	return 0;
}