// Problem: B. Patchouli's Magical Talisman
// Contest: Codeforces - Codeforces Round #796 (Div. 2)
// URL: https://codeforces.com/contest/1688/problem/B
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
		if(even == 0){
			cout << 0 << "\n";
		}
		else if(odd > 0){
			cout << even << "\n";
		}
		else{
			ll min = INT_MAX;
			for(ll i = 0; i < n; i++){
				ll count = 0;
				while(arr[i] > 0){
					arr[i] = arr[i] / 2;
					count++;
					if(arr[i] % 2 != 0){
						break;
					}
				}
				if(min > count)min = count;
			}
			cout << min + (n - 1) << "\n";
		}
  	}
	return 0;
}