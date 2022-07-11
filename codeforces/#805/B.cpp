// Problem: B. Polycarp Writes a String from Memory
// Contest: Codeforces - Codeforces Round #805 (Div. 3)
// URL: https://codeforces.com/contest/1702/problem/B
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
		string s;
		cin >> s;
		map<char, ll> mp;
		ll count = 0;
		for(ll i = 0; i < s.length(); i++){
			mp[s[i]]++;
			if(mp.size() > 3){
				count++;
				mp.clear();
				i--;
			}
		}
		if(mp.size() <= 3)count++;
		cout << count << "\n";
  	}
	return 0;
}