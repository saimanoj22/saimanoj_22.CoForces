// Problem: B. ICPC Balloons
// Contest: Codeforces - Codeforces Round #806 (Div. 4)
// URL: https://codeforces.com/contest/1703/problem/B
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
		string s;
		cin >> s;
		map<char, ll> mp;
		ll sum = 0;
		for(ll i = 0; i < n; i++){
			if(mp.find(s[i]) == mp.end()){
				mp[s[i]]++;
				sum += 2;
			}
			else sum += 1;
		}
		cout << sum << "\n";
  	}
	return 0;
}