// Problem: B. Stand-up Comedian
// Contest: Codeforces - Educational Codeforces Round 142 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1792/problem/B
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
		ll a, b, c, d;
		cin >> a >> b >> c >> d;
		if(a == 0)cout << 1 << "\n";
		else{
			
			ll ans = 0;
			ll score = a;
			ans += a;
			
			ll temp = min(b, c);
			b -= temp;
			c -= temp;
			ans += 2 * temp;
	
			ll temp1 = min(score, d);
			score -= temp1;
			ans += temp1;
			d -= temp1;
			
			
			ll y = max(0LL, d) + max(0LL, b) + max(0LL, c);
			
			ll temp2 = min(score, y);
			score -= temp2;
			y -= temp2;
			if(y > 0)ans++;
			ans += temp2;
			cout << ans << "\n";
		}
		
  	}
	return 0;
}