// Problem: D. Double Strings
// Contest: Codeforces - Codeforces Round #806 (Div. 4)
// URL: https://codeforces.com/contest/1703/problem/D
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
		string arr[n];
		map<string, ll> mp;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			mp[arr[i]]++;
		}
		ll brr[n] = {0};
		for(ll i = 0; i < n; i++){
			for(ll j = 0; j < arr[i].length() - 1; j++){
				string a = arr[i].substr(0, j + 1);
				string b = arr[i].substr(j + 1);
				if(mp[a] > 0 && mp[b] > 0){
					brr[i] = 1;
					break;
				}
			}
		}
		for(ll i = 0; i < n; i++){
			cout << brr[i];
		}
		cout << "\n";
  	}
	return 0;
}