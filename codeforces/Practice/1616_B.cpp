// Problem: B. Mirror in the String
// Contest: Codeforces - Good Bye 2021: 2022 is NEAR
// URL: https://codeforces.com/problemset/problem/1616/B
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
		string t = "";
		t += s[0];
		bool flag = false;
		
		// char x = s[0];
		for(ll i = 1; i < n; i++){
			if(s[i] < s[i - 1]){
				t += s[i];
				flag = true;
			}
			else if(s[i] == s[i - 1] && flag){
				while(i < n && s[i] == s[i - 1]){
					t += s[i];
					i++;
				}
				i--;
				flag = false;
				
			}
			else break;
		}
		string u = t;
		reverse(u.begin(), u.end());
		cout << t + u << "\n";
  	}
	return 0;
}