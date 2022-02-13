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
		ll a[n], flag = 0, sum = 0;
		for(ll i = 0; i < n; i++){
			cin >> a[i];
			if(i >= 1 && i < n-1){
				if(a[i] >= 2)flag = 1;
				if(a[i] % 2 == 0)sum += (a[i] / 2);
				else sum += (a[i] / 2) + 1;
			}
		}
		if(n == 3){
			if(a[1] % 2 != 0)cout << -1 << "\n";
			else cout << a[1] / 2 << "\n";
		}
		else{
			if(flag == 1){
				cout << sum << "\n";
			}
			else{
				cout << -1 << "\n";
			}
		}
 	}
	
	return 0;
};