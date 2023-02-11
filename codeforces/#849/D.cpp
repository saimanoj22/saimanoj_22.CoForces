// Problem: D. Distinct Split
// Contest: Codeforces - Codeforces Round #849 (Div. 4)
// URL: https://codeforces.com/contest/1791/problem/D
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
		string s;
		cin >> s;
		map<char, ll> mp, mp1;;
		for(ll i = 0; i < n; i++){
			mp[s[i]]++;
		}
		ll start = 0;
		ll maxi = 0;
		while(start < n){
			mp1[s[start]]++;
			mp[s[start]]--;
			if(mp[s[start]] == 0){
				mp.erase(s[start]);
			}
			ll temp = mp.size() + mp1.size();
			maxi = max(maxi, temp);
			start++;
		}
		cout << maxi << "\n";
  	}
	return 0;
}