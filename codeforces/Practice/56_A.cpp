// Problem: A. Bar
// Contest: Codeforces - Codeforces Beta Round #52 (Div. 2)
// URL: https://codeforces.com/problemset/problem/56/A
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
		vector<string> v = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
		map<string, ll> mp;
		for(ll i = 0; i < v.size(); i++){
			mp[v[i]]++;
		}
		ll n;
		cin >> n;
		ll count = 0;
		for(ll i = 0; i < n; i++){
			string s;
			cin >> s;
			if(s[0] >= '0' && s[0] <= '9'){
				ll n = stoi(s);
				if(n < 18)count++;
			}
			else{
				if(mp[s] > 0)count++;
			}
		}
		cout << count << "\n";
	return 0;
}