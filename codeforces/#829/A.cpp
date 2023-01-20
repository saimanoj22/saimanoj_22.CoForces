// Problem: A. Technical Support
// Contest: Codeforces - Codeforces Round #829 (Div. 2)
// URL: https://codeforces.com/contest/1754/problem/A
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
		ll q = 0, a = 0;
		bool flag = false;
		for(ll i = n - 1; i >= 0; i--){
			if(s[i] == 'Q')q++;
			else if(s[i] == 'A')a++;
			if(q > a)flag = true;
		}
		if(flag)cout << "No\n";
		else cout << "Yes\n";
  	}
	return 0;
}