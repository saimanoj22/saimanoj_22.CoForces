// Problem: C. Minimum Varied Number
// Contest: Codeforces - Codeforces Round #811 (Div. 3)
// URL: https://codeforces.com/contest/1714/problem/C
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
		ll s;
		cin >> s;
		string ans = "";
		for(ll i = 9; i >= 1; i--){
			if(s >= i){
				ans += '0' + i;
				s -= i;
			}
		}
		sort(ans.begin(), ans.end());
		cout << ans << "\n";
  	}
	return 0;
}