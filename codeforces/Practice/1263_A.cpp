// Problem: A. Sweet Problem
// Contest: Codeforces - Codeforces Round #603 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1263/A
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
		vector<ll> v(3);
		cin >> v[0] >> v[1] >> v[2];
		sort(v.begin(), v.end());
		ll sum = v[0] + v[1];
		if(sum > v[2])cout << (sum + v[2]) / 2 << "\n";
		else cout << sum << "\n";
  	}
	return 0;
}