// Problem: E. Negatives and Positives
// Contest: Codeforces - Codeforces Round #849 (Div. 4)
// URL: https://codeforces.com/contest/1791/problem/E
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
		vector<ll> v(n);
		ll sum = 0, count = 0, mini = 1e9;
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			if(v[i] < 0){
				count++;
				v[i] = -1 * v[i];
			}
			sum += abs(v[i] - 0);
			mini = min(mini, v[i]);
		}
		if(count % 2 == 0){
			cout << sum << "\n";
		}
		else{
			sum -=  2 * mini;
			cout << sum << "\n";
		}
  	}
	return 0;
}