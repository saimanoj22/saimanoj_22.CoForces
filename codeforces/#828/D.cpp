// Problem: D. Divisibility by 2^n
// Contest: Codeforces - Codeforces Round  #828 (Div. 3)
// URL: https://codeforces.com/contest/1744/problem/D
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
		ll two = 0;
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			
			ll temp = v[i];
			while(temp > 0){
				if(temp % 2 == 0)two++;
				else break;
				temp /= 2;
			}
		}
		vector<ll> t;
		for(ll i = 2; i <= n; i += 2){
			ll temp = i;
			ll count = 0;
			while(temp > 0){
				if(temp % 2 == 0)count++;
				else break;
				temp /= 2;
			}
			t.push_back(count);
		}
		if(two >= n){
			cout << 0 << "\n";
		}
		else{
			ll ans = 0;
			bool flag = false;
			sort(t.begin(), t.end(), greater<>());
			for(ll i = 0; i < t.size(); i++){
				two += t[i];
				ans++;
				if(two >= n){
					cout << ans << "\n";
					flag = true;
					break;
				}
			}
			if(!flag)cout << -1 << "\n";
		}
  	}
	return 0;
}