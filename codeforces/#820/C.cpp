// Problem: C. Jumping on Tiles
// Contest: Codeforces - Codeforces Round #820 (Div. 3)
// URL: https://codeforces.com/contest/1729/problem/C?f0a28=1
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
		string s;
		cin >> s;
		char a = s[0];
		char b = s[s.length() - 1];
		map<char, vector<ll>> mp;
		if(a <= b){
			ll count = 0;
			for(ll i = 0; i < s.length(); i++){
				if(s[i] >= a && s[i] <= b){
					mp[s[i]].push_back(i + 1);
					count++;
				}
			}
			
			cout << abs((int)a - (int)b) << " " << count << "\n";
			
			for(auto i = mp.begin(); i != mp.end(); i++){
				vector<ll> temp = i -> second;
				for(int i = 0; i < temp.size(); i++){
					cout << temp[i] << " ";
				}
			}
			cout << "\n";
		}
		else if(a > b){
			ll count = 0;
			for(ll i = 0; i < s.length(); i++){
				if(s[i] >= b && s[i] <= a){
					mp[s[i]].push_back(i + 1);
					count++;
				}
			}
			
			cout << abs((int)a - (int)b) << " " << count << "\n";
			
			for(auto i = mp.rbegin(); i != mp.rend(); i++){
				vector<ll> temp = i -> second;
				for(int i = 0; i < temp.size(); i++){
					cout << temp[i] << " ";
				}
			}
			cout << "\n";
		}
  	}
	return 0;
}