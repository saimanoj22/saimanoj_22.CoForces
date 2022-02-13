#include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
			
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n; 
		cin >> n;
		ll arr[n+1];
		for(ll i = 1; i <= n; i++){
			cin >> arr[i];
		}

		ll total = 0;
		for(ll i = 1; i <= n; i++){
			for(ll j = i; j <= n; j++){
				ll zcount = 0, length = 0;
				for(ll k = i; k <= j; k++){
					length++;
					if(arr[k] == 0)zcount++;
				}
				if(zcount > 0)total += (length + zcount);
				else total += length;
			}
		}
		cout << total << "\n";
 	}
	
	return 0;
};