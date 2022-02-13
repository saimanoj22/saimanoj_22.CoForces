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
		ll arr[n], flag = 0;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			if(i != 0){
				if(arr[i] < arr[i-1])flag = 1;
			}
		}
		if(flag == 1)cout << "YES\n";
		else cout << "NO\n";
 	}
	
	return 0;
};