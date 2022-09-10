// Problem: A. Spell Check
// Contest: Codeforces - Codeforces Round #817 (Div. 4)
// URL: https://codeforces.com/contest/1722/problem/A
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
		string t = "Timur";
		if(n != 5){
			cout << "NO\n";
		}
		else{
			sort(s.begin(), s.end());
			sort(t.begin(), t.end());
			if(s == t)cout << "YES\n";
			else cout << "NO\n";
		}
  	}
	return 0;
}