// Problem: B1. Tokitsukaze and Good 01-String (easy version)
// Contest: Codeforces - Codeforces Round #789 (Div. 2)
// URL: https://codeforces.com/contest/1678/problem/B1
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
		ll count = 1;
		vector<ll> v;
		for(ll i = 1; i < s.length(); i++){
			if(s[i] != s[i - 1]){
				if(count % 2 == 0)v.push_back(0);
				else v.push_back(1);
				count = 0;
			}
			count++;
		}
		
		if(count % 2 == 0)v.push_back(0);
		else v.push_back(1);
		

		if(v.size() == 1){
			cout << 0 << "\n";
		}
		else{
			int ans = 0, total = 0, flag = 0;
			for(ll i = 0; i < v.size(); i++){
				if(v[i] == 1 && flag == 0){
					ans = 0;
					for(int j = i + 1;; j++){
						if(v[j] == 1){
							break;
						}
						ans++;
					}
					total += ans + 1;
					flag = 1;
				}
				else if(v[i] == 1){
					flag = 0;
				}
			}
			cout << total << "\n";
		}
  	}
	return 0;
}