// Problem: A. Bear and Prime 100
// Contest: Codeforces - Codeforces Round #356 (Div. 1)
// URL: https://codeforces.com/problemset/problem/679/A
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
	vector<ll> v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 4, 9, 25, 49, 81};
	ll count = 0;
	for(ll i = 0; i < v.size(); i++){
		cout << v[i] << "\n";
		cout<< flush;
		string s;
		cin >> s;
		if(s == "yes")count++;
	}
	if(count > 1)cout << "composite\n";
	else cout << "prime\n";
	return 0;
}