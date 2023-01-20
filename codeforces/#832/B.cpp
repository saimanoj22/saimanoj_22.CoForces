// Problem: B. BAN BAN
// Contest: Codeforces - Codeforces Round #832 (Div. 2)
// URL: https://codeforces.com/contest/1747/problem/B
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
			cout << 1 << "\n";
			cout << 1 << " " << 2 << "\n";
		}
		else{
			ll ans;	
			ans = n / 2;
			if(n % 2)ans++;
			cout << ans << "\n"; 
			for(ll i = 1; i <= ans; i++){
				cout << 3 * i - 1 << " " << 3 * (n - i + 1) << "\n";
			}
		}
  	}
	return 0;
}