// Problem: C. Stripes
// Contest: Codeforces - Codeforces Round #827 (Div. 4)
// URL: https://codeforces.com/contest/1742/problem/C
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
		ll n = 8;
		vector<string> v;
		for(ll i = 0; i < n; i++){
			string s;
			cin >> s;
			v.push_back(s);
		}
		ll r = 0;
		for(ll i = 0; i < n; i++){
			if(v[i] == "RRRRRRRR"){
				r = 1;
			}
		}
		if(r == 1){
			cout << 'R' << "\n";
		}
		else cout << 'B' << "\n";
  	}
	return 0;
}