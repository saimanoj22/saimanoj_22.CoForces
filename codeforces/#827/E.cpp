// Problem: E. Scuza
// Contest: Codeforces - Codeforces Round #827 (Div. 4)
// URL: https://codeforces.com/contest/1742/problem/E
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n, q;
		cin >> n >> q;
		vector<ll> v(n), presum(n);
		
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			presum[i] = v[i];
			if(i != 0){
				presum[i] += presum[i - 1];
			}
		}
		
		vector<ll> qu(q), qtemp(q);
		for(ll i = 0; i < q; i++){
			cin >> qu[i];
		}
		qtemp = qu;
		
		map<ll, ll> mp;
		sort(qtemp.begin(), qtemp.end());
		ll j = 0;
		for(ll i = 0; i < q; i++){
			if(mp[qtemp[i]] == 0){
				while(j < n && v[j] <= qtemp[i]){
					j++;
				}
				if(j == n){
					for(ll k = i; k < q; k++){
						mp[qtemp[k]] = presum[j - 1];
					}
					break;
				}
				if(j == 0){
					mp[qtemp[i]] = 0;
				}
				else{
					mp[qtemp[i]] = presum[j - 1];
				}
			}
		}
		
		
		for(ll i = 0; i < q; i++){
			cout << mp[qu[i]] << " ";
		}
		cout << "\n";
  	}
	return 0;
}