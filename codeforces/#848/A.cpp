// Problem: A. Flip Flop Sum
// Contest: Codeforces - Codeforces Round #848 (Div. 2)
// URL: https://codeforces.com/contest/1778/problem/A
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
		ll sum = 0, count = 0;
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			sum += v[i];
			if(v[i] < 0)count++;
		}
		if(count == 0)cout << sum - 4 << "\n";
		else if(count == 1)cout << sum << "\n";
		else{
			bool flag = false;
			for(ll i = 0; i < n - 1; i++){
				if(v[i] == -1 && v[i + 1] == -1)flag = true;
			}
			if(flag)cout << sum + 4 << "\n";
			else cout << sum << "\n";
		}
  	}
	return 0;
} 