// Problem: C. Traffic Light
// Contest: Codeforces - Codeforces Round  #828 (Div. 3)
// URL: https://codeforces.com/contest/1744/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

ll mod(ll a, ll b, ll n){
	ll ans = a - b;
	if(ans > 0){
		return ans % n;
	}
	else{
		return n + ans;
	}
}

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n;
		char li;
		cin >> n >> li;
		string s;
		cin >> s;
		vector<ll> vli, vg;
		ll maxg = 0, ming = 1e9;
		for(ll i = 0; i < n; i++){
			if(s[i] == li){
				vli.push_back(i + 1);
			}
			if(s[i] == 'g'){
				vg.push_back(i + 1);
				maxg = max(maxg, i + 1);
				ming = min(ming, i + 1);
			}
		}

		if(li == 'g'){
			cout << 0 << "\n";
		}
		else{
			ll maxi = 0;
			for(ll i = 0; i < vli.size(); i++){
				if(vli[i] < maxg){
					ll gpos = lower_bound(vg.begin(), vg.end(), vli[i]) - vg.begin();
					maxi = max(maxi, (vg[gpos] - vli[i]));
				}
				else{
					ll ans = mod(ming, vli[i], n);
					maxi = max(maxi, ans);
				}
			}
			cout << maxi << "\n";
		}
  	}
	return 0;
}