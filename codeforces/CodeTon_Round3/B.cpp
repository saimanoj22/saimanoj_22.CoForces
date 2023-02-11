// Problem: B. Maximum Substring
// Contest: Codeforces - CodeTON Round 3 (Div. 1 + Div. 2, Rated, Prizes!)
// URL: https://codeforces.com/contest/1750/problem/B
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
		string s;
		cin >> s;
		ll one = 0, zero = 0, maxo = 0, maxz = 0, tempo = 0, tempz = 0;
		for(ll i = 0; i < n; i++){
			if(s[i] == '1'){
				one++;
				tempo++;
				maxz = max(maxz, tempz);
				tempz = 0;
			}
			else{
				zero++;
				tempz++;
				maxo = max(maxo, tempo);
				tempo = 0;
			}
		}
		maxz = max(maxz, tempz);
		maxo = max(maxo, tempo);
		ll a = 0;
		if(one > 0 && zero > 0)a = one * zero;
		ll b = maxo * maxo;
		ll c = maxz * maxz;
		ll ans = max(a, b);
		ans = max(ans, c);
		cout << ans << "\n";
  	}
	return 0;
}