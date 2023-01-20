// Problem: A. A+B?
// Contest: Codeforces - Codeforces Round #839 (Div. 3)
// URL: https://codeforces.com/contest/1772/problem/A
// Memory Limit: 512 MB
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
		int a = s[0] - '0';
		int b = s[2] - '0';
		cout << a + b << "\n";
  	}
	return 0;
}