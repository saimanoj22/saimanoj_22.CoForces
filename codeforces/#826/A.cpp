// Problem: A. Compare T-Shirt Sizes
// Contest: Codeforces - Codeforces Round #826 (Div. 3)
// URL: https://codeforces.com/contest/1741/problem/A
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
		string s, t;
		cin >> s >> t;
		ll n = s.length();
		ll nn = t.length();

		if(s == t){
			cout << "=\n";
		}
		else if(s[n - 1] == 'L'){
			if(t[nn - 1] != 'L'){
				cout << ">\n";
			}
			else{
				if(s.length() > t.length())cout << ">\n";
				else cout << "<\n";
			}
		}
		else if(s[n - 1] == 'M'){
			if(t[nn - 1] == 'S')cout << ">\n";
			else if(t[nn - 1] == 'L')cout << "<\n";
		}
		else if(s[n - 1] == 'S'){
			if(t[nn - 1] == 'S'){
				if(s.length() > t.length())cout << "<\n";
				else cout << ">\n";
			}
			else{
				cout << "<\n";
			}
		}
  	}
	return 0;
}