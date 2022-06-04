// Problem: A. Cirno's Perfect Bitmasks Classroom
// Contest: Codeforces - Codeforces Round #796 (Div. 2)
// URL: https://codeforces.com/contest/1688/problem/0
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
		if(n == 1){
			cout << 3 << "\n";
		}
		else if(n % 2 != 0){
			cout << 1 << "\n";
		}
		else if(n % 2 == 0){
			vector<ll> v;
			while(n > 0){
				v.push_back(n % 2);
				n = n / 2;
			}
			ll ans = 0;
			for(ll i = 0; i < v.size(); i++){
				if(v[i] == 1){
					ans += pow(2, i);
					if(i == v.size() - 1){
						ans++;
					}
					break;
				}
			}
			cout << ans << "\n";
		}
  	}
	return 0;
}