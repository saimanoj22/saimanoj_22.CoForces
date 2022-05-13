// Problem: C. Most Similar Words
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/contest/1676/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n, m;
		cin >> n >> m;
		string arr[n];
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
		}
		ll min = INT_MAX;
		for(ll i = 0; i < n; i++){
			for(ll j = i + 1; j < n; j++){
				ll sum = 0;
				for(ll k = 0; k < m; k++){
					sum += abs(arr[i][k] - arr[j][k]);
				}
				if(min > sum)min = sum;
			}
		}
		cout << min << "\n";
  	}
	return 0;
}