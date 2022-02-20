# include <bits/stdc++.h>
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
		ll arr[n];
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
		}
		sort(arr, arr+n);
		ll sum = arr[0];
		for(ll i = 1; i < n; i++){
			sum = sum | arr[i];
		}
		cout << sum << "\n";
 	}

	return 0;
}