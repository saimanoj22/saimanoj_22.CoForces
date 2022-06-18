// Problem: F. 3SUM
// Contest: Codeforces - Codeforces Round #799 (Div. 4)
// URL: https://codeforces.com/contest/1692/problem/F
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
		ll arr[n];
		map<int, int> mp;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			mp[arr[i] % 10]++;
		}
		ll flag = 0;
		for(ll i = 0; i < 10; i++){
			for(ll j = 0; j < 10; j++){
				for(ll k = 0; k < 10; k++){
					if((i + j + k) % 10 == 3){
						flag = 1;
						ll a = mp[i];
						ll b = mp[j];
						ll c = mp[k];
						if(mp[i] > 0)mp[i]--;
						else flag = 0;
						if(mp[j] > 0)mp[j]--;
						else flag = 0;
						if(mp[k] > 0)mp[k]--;
						else flag = 0;
						if(flag == 1){
							cout << "YES\n";
						}
						else{
							mp[i] = a;
							mp[j] = b;
							mp[k] = c;
						}
					}
				}
				if(flag == 1)break;
			}
			if(flag == 1)break;
		}
		if(flag == 0)cout << "NO\n";
  	}
	return 0;
}