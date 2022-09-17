// Problem: B. Decode String
// Contest: Codeforces - Codeforces Round #820 (Div. 3)
// URL: https://codeforces.com/contest/1729/problem/B
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
		string ans = "";
		for(ll i = n - 1; i >= 0; i--){
			if(s[i] == '0'){
				string t = "";
				t += s[i - 2];
				t += s[i - 1];
				ll num = stoi(t);
				ans += 'a' + (num - 1);
				i -= 2;
			}
			else{
				ans += 'a' + ((s[i] - '0') - 1);
			}
		}
		reverse(ans.begin(), ans.end());
		cout << ans << "\n";
  	}
	return 0;
}