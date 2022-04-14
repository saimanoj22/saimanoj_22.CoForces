// Problem: A. Card Game
// Contest: Codeforces - Good Bye 2019
// URL: https://codeforces.com/contest/1270/problem/A
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
		ll n, a, b;
		cin >> n >> a >> b;
		ll arr[a], brr[b], maxa = 0, maxb = 0;
		for(ll i = 0; i < a; i++){
			cin >> arr[i];
			maxa = max(maxa, arr[i]);
		}
		for(ll i = 0; i < b; i++){
			cin >> brr[i];
			maxb = max(maxb, brr[i]);
		}
		if(maxa > maxb)cout << "YES\n";
		else cout << "NO\n";
  	}
	return 0;
}