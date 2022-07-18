// Problem: A. YES or YES?
// Contest: Codeforces - Codeforces Round #806 (Div. 4)
// URL: https://codeforces.com/contest/1703/problem/A
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
		s[0] = tolower(s[0]);
		s[1] = tolower(s[1]);
		s[2] = tolower(s[2]);
		if(s == "yes"){
			cout << "YES\n";
		}
		else cout << "NO\n";
  	}
	return 0;
}