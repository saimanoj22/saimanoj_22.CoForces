// Problem: C. Tea Tasting
// Contest: Codeforces - Educational Codeforces Round 143 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1795/problem/C
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
		vector<ll> v(n), t(n), sufft(n), preft(n), ans(n + 1, 0), anst(n, 0);
		for(ll i = 0; i < n; i++)cin >> v[i];
		for(ll i = 0; i < n; i++){
			cin >> t[i];
			sufft[i] = t[i];
			preft[i] = t[i];
		}
		
		for(ll i = n - 1; i >= 1; i--){
			sufft[i - 1] += sufft[i]; 
		}
		
		for(ll i = 1; i < n; i++){
			preft[i] += preft[i - 1];
		}
		
		for(ll i = 0; i < n; i++){
			if(v[i] >= sufft[i]){
				ans[i] += 1;
				ans[n] += -1;
			}
			else{
				ans[i] += 1;
				
				ll index, search;
				if(i == 0){
					search = v[i];
					index = upper_bound(preft.begin(), preft.end(), search) - preft.begin();
				}
				else{ 
					search = v[i] + preft[i - 1];
					index = upper_bound(preft.begin() + i, preft.end(), search) - preft.begin();
				}
				ans[index] += -1;
				if(index > 0)anst[index] += search - preft[index - 1];
				else anst[index] = search;
			}
		}
		
		for(ll i = 1; i < n + 1; i++){
			ans[i] += ans[i - 1];
		}
		for(ll i = 0; i < n; i++){
			ans[i] *= t[i];
		}
		for(ll i = 0; i < n; i++){
			ans[i] += anst[i];
		}
		for(ll i = 0; i < n; i++){
			cout << ans[i] << " ";
		}
		cout << "\n";
		
  	}
	return 0;
}