// Problem: B. NIT Destroys the Universe
// Contest: Codeforces - Codeforces Global Round 21
// URL: https://codeforces.com/contest/1696/problem/B
// Memory Limit: 512 MB
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
		}
		for(ll i = 0; i < n; i++){
			if(arr[i] == 0 && arr[i + 1] != 0 && i != n - 1){
				count++;
			}
		}
		if(arr[0] != 0)count++;
		cout << min(count, 2LL) << "\n";
  	}
	return 0;
}