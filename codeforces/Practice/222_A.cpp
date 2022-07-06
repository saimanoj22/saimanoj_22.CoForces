// Problem: A. Shooshuns and Sequence
// Contest: Codeforces - Codeforces Round #137 (Div. 2)
// URL: https://codeforces.com/problemset/problem/222/A
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
		ll n, k;
		cin >> n >> k;
		k--;
		ll arr[n], count = 0, kcount = 0;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			if(i > 0){
				if(arr[i] == arr[i - 1])count++;
			}
			if(i > k){
				if(arr[i] == arr[k])kcount++;
			}
		}
		if(count == n - 1){
			cout << 0 << "\n";
		}
		else{
			if(kcount == n - (k + 1)){
				ll rem = 0;
				for(ll i = 0; i < k; i++){
					if(arr[i] == arr[k])rem++;
					else rem = 0;
				}
				cout << k - rem << "\n";
			}
			else{
				cout << -1 << "\n";
			}
		}
	return 0;
}