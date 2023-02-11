// Problem: B. Sum of Two Numbers
// Contest: Codeforces - Codeforces Round #851 (Div. 2)
// URL: https://codeforces.com/contest/1788/problem/B
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
		
		map<ll, pair<ll, ll>> mp;
		mp[1] = {0, 1};
		mp[2] = {1, 1};
		mp[3] = {1, 2};
		mp[4] = {2, 2};
		mp[5] = {2, 3};
		mp[6] = {3, 3};
		mp[7] = {3, 4};
		mp[8] = {4, 4};
		mp[9] = {4, 5};
		
		
		if(n % 2 == 0){
			cout << n / 2 << " " << n / 2 << "\n";
		}
		else{
			string s = to_string(n);
			string x, y;
			ll count = 0;
			for(ll i = 0; i < s.length(); i++){
				ll d = s[i] - '0';
				if(d % 2){
					ll a = mp[d].first, b = mp[d].second;
					if(count % 2){
						x += to_string(a);
						y += to_string(b);
					}
					else{
						x += to_string(b);
						y += to_string(a);
					}
					count++;
				}
				else{
					string c = to_string(d / 2);
					x += c;
					y += c;
				}
			}
			cout << stoi(x) << " " << stoi(y) << "\n";
		}
  	}
	return 0;
}