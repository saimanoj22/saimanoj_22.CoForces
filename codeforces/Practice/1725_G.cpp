// Problem: G. Garage
// Contest: Codeforces - COMPFEST 14 - Preliminary Online Mirror (Unrated, ICPC Rules, Teams Preferred)
// URL: https://codeforces.com/contest/1725/problem/G
// Memory Limit: 128 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

map<ll, ll> mp;
vector<ll> v;
void generateAll(ll a, ll b, ll n){
	ll ans = abs(pow(a, 2) - pow(b, 2));
	mp[ans] = 1;
	v.push_back(ans);
	// cout << a << " " << b << "\n";
 	if(mp.size() >= 2 * n){
 		// cout << ans << "\n";
 		return;
 	}
 	if(v.size() == 1 || v[v.size() - 1] < v[v.size() - 2])generateAll(a, ++b, n);
 	else if(v[v.size() - 1] >= v[v.size() - 2])generateAll(++a, b, n);
}

int main(){
	// ll testcases;
	// cin >> testcases;
	// while(testcases--){
  	// }
  	ll n;
  	cin >> n;
  	generateAll(1, 2, n);
  	ll temp = 0;
  	for(auto m : mp){
  		temp++;
  		if(temp == n)cout << m.first << "\n";
  	}
  	// cout << "\n";
	return 0;
}