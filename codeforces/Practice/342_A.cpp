// Problem: A. Xenia and Divisors
// Contest: Codeforces - Codeforces Round #199 (Div. 2)
// URL: https://codeforces.com/problemset/problem/342/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
  	ll n;
  	cin >> n;
  	ll arr[n], brr[8] = {0};
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  		brr[arr[i]]++;
  	}
  	if(brr[1] == 0){
  		cout << -1 << "\n";
  	}
  	else if(brr[5] > 0 || brr[7] > 0){
  		cout << -1 << "\n";
  	}
  	else if(brr[2] == 0 && brr[4] > 0){
  		cout << -1 << "\n";
  	}
  	else{
		if(brr[1] >= brr[4] && brr[2] >= brr[4]){
			brr[1] -= brr[4];
			brr[2] -= brr[4];
			
			if(brr[1] == brr[6] && brr[2] + brr[3] == brr[6]){
				for(ll i = 0; i < brr[4]; i++){
					cout << 1 << " " << 2 << " " << 4 << "\n";
				}
				for(ll i = 0; i < brr[3]; i++){
					cout << 1 << " " << 3 << " " << 6 << "\n";
				}
				for(ll i = 0; i < brr[2]; i++){
					cout << 1 << " " << 2 << " " << 6 << "\n";
				}
			}
			else{
				cout << -1 << "\n";
			}
		}
		else{
			cout << -1 << "\n";
		}
  	}
	return 0;
}