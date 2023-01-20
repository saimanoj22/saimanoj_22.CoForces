// Problem: B. Rebellion
// Contest: Codeforces - Codeforces Global Round 23
// URL: https://codeforces.com/contest/1746/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n;
		cin >> n;
		vector<ll> v(n);
		for(ll i = 0; i < n; i++){
			cin >> v[i];
		}
		ll start = 0, end = n - 1, count = 0;
		while(start <= end){
			while(start < n && v[start] == 0){
				start++;
			}
			while(end >= 0 && v[end] == 1){
				end--;
			}
			if(start < end)count++;
			start++;
			end--;
		}
		cout << count << "\n";
  	}
	return 0;
}