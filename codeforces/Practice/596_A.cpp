// Problem: A. Wilbur and Swimming Pool
// Contest: Codeforces - Codeforces Round #331 (Div. 2)
// URL: https://codeforces.com/problemset/problem/596/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	// ll testcases;
	// cin >> testcases;
	// while(testcases--){
  	// }
  	ll n;
  	cin >> n;
  	vector<pair<ll, ll>> v;
  	for(ll i = 0; i < n; i++){
  		ll a, b;
  		cin >> a >> b;
  		v.push_back({a, b});
  	}
  	if(n < 2){
  		cout << -1 << "\n";
  	}
  	else if(n == 2){
  		ll a = v[0].first;
  		ll b = v[0].second;
  		ll c = v[1].first;
  		ll d = v[1].second;
  		if(a != c && b != d){
  			ll s1 = abs(a - c);
  			ll s2 = abs(b - d);
  			cout << s1 * s2 << "\n";
  		}
  		else{
  			cout << -1 << "\n";
  		}
  	}
  	else if(n == 3){
  		ll a = 0, b = 0;
  		sort(v.begin(), v.end());
		if(v[0].first == v[1].first){
			a = max(a, abs(v[0].second - v[1].second));
		}
		else if(v[0].first == v[2].first){
			a = max(a, abs(v[0].second - v[2].second));
		}
		if(v[1].first == v[2].first){
			a = max(a, abs(v[1].second - v[2].second));
		}
		if(v[0].second == v[1].second){
			b = max(b, abs(v[0].first - v[1].first));
		}
		else if(v[0].second == v[2].second){
			b = max(b, abs(v[0].first - v[2].first));
		}
		if(v[1].second == v[2].second){
			b = max(b, abs(v[1].first - v[2].first));
		}
		cout << a * b << "\n";
  	}
  	else{
  		ll a = v[0].first, b = v[0].second;
  		ll u = 0, w = 0, x = 0, y = 0;
  		for(ll i = 1; i < v.size(); i++){
  			if(v[i].first == a){
  				x = v[i].first;
  				y = v[i].second;
  			}
  			if(v[i].second == b){
  				u = v[i].first;
  				w = v[i].second;
  			}
  		}
		ll s1 = abs(a - x) + abs(b - y);
		ll s2 = abs(a - u) + abs(b - w);
		cout << s1 * s2 << "\n";
  	}
	return 0;
}