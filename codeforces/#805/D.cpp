// Problem: D. Not a Cheap String
// Contest: Codeforces - Codeforces Round #805 (Div. 3)
// URL: https://codeforces.com/contest/1702/problem/D
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
		ll p;
		cin >> p;
		string t = s;
		sort(t.begin(), t.end());
		ll arr[t.length()];
		ll index = 1e9;
		for(ll i = 0; i < t.length(); i++){
			arr[i] = (t[i] - 'a') + 1;
			if(i != 0){
				arr[i] += arr[i - 1];
			}
			if(arr[i] > p){
				index = min(index, i);
			}
		}
		if(index > arr[t.length() - 1]){
			cout << s << "\n";
		}
		else if(index == 0){
			cout << "\n";
		}
		else{
			t = t.substr(index);
			map<char, ll> mp;
			for(ll i = 0; i < t.length(); i++){
				mp[t[i]]++;
			}
			for(ll i = 0; i < s.length(); i++){
				if(mp[s[i]] > 0){
					mp[s[i]]--;
				}
				else{
					cout << s[i];
				}
			}
			cout << "\n";
		}
  	}
	return 0;
}