// Problem: A. NIT orz!
// Contest: Codeforces - Codeforces Global Round 21
// URL: https://codeforces.com/contest/1696/problem/A
// Memory Limit: 512 MB
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
		ll n, z;
		cin >> n >> z;
		ll arr[n], orr, max = 0;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			orr = arr[i] | z;
			if(max < orr){
				max = orr;
			}
		}
		cout << max << "\n";
  	}
	return 0;
}