// Problem: A. Game
// Contest: Codeforces - Codeforces Round #775 (Div. 2, based on Moscow Open Olympiad in Informatics)
// URL: https://codeforces.com/problemset/problem/1649/A
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
		ll arr[n], flag = 0;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			if(arr[i] == 0){
				flag = 1;
			}
		}
		if(flag != 1){
			cout << 0 << "\n";
		}
		else{
			ll left = 0, right = 0;
			for(ll i = 0; i < n; i++){
				if(arr[i] == 0){
					left = i;
					break;
				}
			}
			
			for(ll i = n; i > 0; i--){
				if(arr[i] == 0){
					right = i;
					break;
				}
			}
			
			if(left == right)cout << 2 << "\n";
			else cout << right - left + 2 << "\n";
		}

		
  	}
	return 0;
}