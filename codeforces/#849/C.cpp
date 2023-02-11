// Problem: C. Prepend and Append
// Contest: Codeforces - Codeforces Round #849 (Div. 4)
// URL: https://codeforces.com/contest/1791/problem/C
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
		ll start = 0, end = n - 1;
		ll ans = n;
		while(start <= end){
			if(s[start] == '1' && s[end] == '0'){
				ans -= 2;
				start++;
				end--;
			}
			else if(s[start] == '0' && s[end] == '1'){
				ans -= 2;
				start++;
				end--;
			}
			else break;

		}
		cout << ans << "\n";
  	}
	return 0;
}