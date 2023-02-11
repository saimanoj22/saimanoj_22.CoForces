// Problem: A. One and Two
// Contest: Codeforces - Codeforces Round #851 (Div. 2)
// URL: https://codeforces.com/contest/1788/problem/A
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
		ll sum = 0;
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			if(v[i] == 2)sum++;
		}
		ll sum1 = 0, index = -1, flag = 0;
		for(ll i = 0; i < n; i++){
			if(v[i] == 2){
				sum1++;
				sum--;
			}
			if(sum == sum1){
				flag = 1;
				index = i + 1;
				break;
			}
			// cout << sum1 << " " << sum << "*\n";
		}
		if(flag)cout << index << "\n";
		else cout << -1 << "\n";
  	}
	return 0;
}