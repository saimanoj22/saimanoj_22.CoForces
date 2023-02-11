// Problem: A. Polycarp and the Day of Pi
// Contest: Codeforces - Codeforces Round #847 (Div. 3)
// URL: https://codeforces.com/contest/1790/problem/A
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
		string t = "3141592653589793238462643383279";
		ll count = 0;
		for(ll i = 0; i < s.length(); i++){
			if(s[i] == t[i])count++;
			else break;
		}
		cout << count << "\n";
  	}
	return 0;
}