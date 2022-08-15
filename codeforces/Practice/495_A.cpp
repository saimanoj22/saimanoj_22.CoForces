// Problem: A. Digital Counter
// Contest: Codeforces - Codeforces Round #282 (Div. 2)
// URL: https://codeforces.com/problemset/problem/495/A
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
  	vector<vector<ll>> v = {
						  		{0, 0, 8},
						  		{1, 0, 1, 3, 4, 7, 8, 9},
						  		{2, 2, 8},
						  		{3, 3, 8, 9},
						  		{4, 4, 8, 9},
						  		{5, 5, 6, 8, 9},
						  		{6, 6, 8},
						  		{7, 0, 3, 7, 8, 9},
						  		{8, 8},
						  		{9, 8, 9}
							};
	string s;
	cin >> s;
	ll a = s[0] - '0', b = s[1] - '0';
	vector<ll> aa, bb;
	for(ll i = 0; i < 10; i++){
		if(v[i][0] == a){
			aa = v[i];
		}
		if(v[i][0] == b){
			bb = v[i];
		}
	}
	cout << (aa.size() - 1) * (bb.size() - 1) << "\n";
	return 0;
}