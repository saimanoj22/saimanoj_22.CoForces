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
		ll arr[n], one = 0, zero = 0;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			if(arr[i] == 0)zero++;
			else one++;
		}
		if(one <= n/2){
			cout << n-one << "\n";
			for(int i = 0; i < n-one; i++){
				cout << 0 << " ";
			}
			cout << "\n";
		}
		else if(zero <= n/2){
			if(one % 2 == 0){
				cout << n-zero << "\n";
				for(int i = 0; i < n-zero; i++){
					cout << 1 << " ";
				}
				cout << "\n";
			}
			else{
				cout << n-zero-1 << "\n";
				for(int i = 0; i < n-zero-1; i++){
					cout << 1 << " ";
				}
				cout << "\n";
			}
		}
	}
	return 0;
}