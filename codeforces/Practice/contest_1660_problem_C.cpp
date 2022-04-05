// Problem: C. Get an Even String
// Contest: Codeforces - Codeforces Round #780 (Div. 3)
// URL: https://codeforces.com/contest/1660/problem/C
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
		ll check[26] = {0}, count = 0;
		for(ll i = 0; i < s.length(); i++){
			if(check[s[i] - 'a'] == 1){
				count += 2;
				for(ll i = 0; i < 26; i++) check[i] = 0;
			}
			else{
				check[s[i] - 'a'] = 1;
			}
		}
		cout << s.length() - count << "\n";
  	}
	return 0;
}