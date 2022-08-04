// Problem: A. Everyone Loves to Sleep
// Contest: Codeforces - Codeforces Round #811 (Div. 3)
// URL: https://codeforces.com/contest/1714/problem/A
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
		ll n, h, m;
		cin >> n >> h >> m;
		ll arr[n][2];
		ll minh = 1e9, minm = 1e9;
		for(ll i = 0; i < n; i++){
            ll temph = h, tempm = m;
			cin >> arr[i][0] >> arr[i][1];
			
			temph = arr[i][0] - temph;
			tempm = arr[i][1] - tempm;
			
			if(temph < 0){
				temph = 24 + temph;
			}
			if(tempm < 0){
				temph--;
				if(temph < 0){
					temph = 24 + temph;
				}
				tempm = 60 + tempm;
			}
			
			if(minh > temph){
				minh = temph;
				minm = tempm;
			}
			else if(minh == temph){
				if(minm > tempm){
					minm = tempm;
				}
			}
		}
		cout << minh << " " << minm << "\n";
  	}
	return 0;
}