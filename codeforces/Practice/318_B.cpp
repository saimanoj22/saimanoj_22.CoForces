// Problem: B. Strings of Power
// Contest: Codeforces - Codeforces Round #188 (Div. 2)
// URL: https://codeforces.com/problemset/problem/318/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
  	string s;
  	cin >> s;
  	vector<ll> h, m;
  	if(s.length() < 5){
  		cout << 0 << "\n";
  	}
  	else{
	  	for(ll i = 0; i <= s.length() - 5; i++){
	  		string t = s.substr(i, 5);
	  		if(t == "heavy")h.push_back(i);
	  		else if(t == "metal")m.push_back(i);
	  	}
	  	ll ans = 0;
	  	if(m.size() == 0 || h.size() == 0){
	  		cout << 0 << "\n";
	  	}
	  	else{
		  	for(ll i = 0; i < h.size(); i++){
		  		ll lower = lower_bound(m.begin(), m.end(), h[i]) - m.begin();
		  		ans += m.size() - lower;
		  		// cout << h[i] << " ";
		  	}
		  	cout << ans << "\n";
	  	}
  	}
	return 0;
}