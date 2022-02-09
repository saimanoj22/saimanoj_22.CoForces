#include <bits/stdc++.h>
using namespace std;
# define ll long long int

void printPattern(ll n, ll k){
	ll even = 2, odd = 1;
	for(ll i = 1; i <= n; i++){
		for(ll j = 1; j <= k; j++){
			if(i % 2 == 0){
				cout << even << " ";
				even += 2;
			}
			else{
				cout << odd << " ";
				odd += 2;
			}
		}
		cout << "\n";
	}
}

int main(){
			
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n, k;
		cin >> n >> k;

		ll even, odd;
		even = (n*k) / 2;
		odd = (n*k) - even;
		
		if(even % k == 0 && odd % k == 0){
			cout << "YES\n";
			printPattern(n, k);
		}
		else{
			cout << "NO\n";
		}
	}
	
	return 0;
};