// Problem: D. Friends and the Restaurant
// Contest: Codeforces - Codeforces Round #820 (Div. 3)
// URL: https://codeforces.com/contest/1729/problem/D
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
		ll n;
		cin >> n;
		vector<ll> a(n), b(n), v(n);
		for(ll i = 0; i < n; i++){
			cin >> a[i];
		}
		for(ll i = 0; i < n; i++){
			cin >> b[i];
		}
		for(ll i = 0; i < n; i++){
			v[i] = b[i] - a[i];
		}
		
		sort(v.begin(), v.end());
		
		ll count = 0;
		ll i = 0, j = v.size() - 1;
		while(i < j){
			if(v[i] + v[j] >= 0){
				count++;
				i++;
				j--;
			}
			else{
				i++;
			}
		}
		cout << count << "\n";
		
  	}
	return 0;
}