// Problem: A. Marin and Photoshoot
// Contest: Codeforces - Codeforces Round #779 (Div. 2)
// URL: https://codeforces.com/contest/1658/problem/A
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
		ll two = 0, one = 0;
		for(ll i = 0; i < n; i++){
			if(s[i] == '0' && s[i + 1] == '0'){
				two++;
			}
			if(s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0'){
				one++;
			}
		}
		cout << (two * 2) + one << "\n";
  	}
	return 0;
}