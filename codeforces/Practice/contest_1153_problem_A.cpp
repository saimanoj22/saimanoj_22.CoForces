// Problem: A. Serval and Bus
// Contest: Codeforces - Codeforces Round #551 (Div. 2)
// URL: https://codeforces.com/contest/1153/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	/*ll testcases;
	cin >> testcases;
	while(testcases--){

  	}*/
	ll n, t;
	cin >> n >> t;
	ll min = INT_MAX, flag = 0;
	for(ll i = 0; i < n; i++){
		ll s, d;
		cin >> s >> d;
		while(1){
			if(min > (s - t) && s - t >= 0){
				min = s - t;
				flag = i + 1;
			}
			if(s > t){
				break;
			}
			s += d;
		}
	}
	cout << flag << "\n";
	return 0;
}