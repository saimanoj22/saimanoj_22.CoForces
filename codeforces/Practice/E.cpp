// Problem: E. 2-Letter Strings
// Contest: Codeforces - Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/E
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
		ll n;
		cin >> n;
		vector<string> v;
		map<string, ll> sp;
		map<char, ll> left, right;
		for(ll i = 0; i < n; i++){
			string temp;
			cin >> temp;
			sp[temp]++;
			left[temp[0]]++;
			right[temp[1]]++;
			v.push_back(temp);
		}
		ll count = 0;
		for(ll i = 0; i < n; i++){
			ll temp = max(left[v[i][0]] - sp[v[i]], 0LL);
			count += temp;
			temp = max(right[v[i][1]] - sp[v[i]], 0LL);
			count += temp;
			left[v[i][0]]--;
			right[v[i][1]]--;
			sp[v[i]]--;
		}
		cout << count << "\n";
  	}
	return 0;
}