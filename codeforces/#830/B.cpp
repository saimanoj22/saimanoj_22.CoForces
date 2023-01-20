// Problem: B. Ugu
// Contest: Codeforces - Codeforces Round #830 (Div. 2)
// URL: https://codeforces.com/contest/1732/problem/B
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
		ll count = 0;
		for(int i = 1; i < s.length(); i++){
			if(s[i] != s[i - 1])count++;
		}	
		if(s[0] == '0'){
			if(count - 1 < 0)cout << 0 << "\n"; 
			else cout << count - 1 << "\n";
		}
		else cout << count << "\n";
  	}
	return 0;
}