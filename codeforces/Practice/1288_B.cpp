// Problem: B. Yet Another Meme Problem
// Contest: Codeforces - Educational Codeforces Round 80 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1288/B
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
		ll a, b;
		cin >> a >> b;
		string s = to_string(b);
		
		bool flag = true;
		
		for(ll i = 0; i < s.length(); i++){
			if(s[i] != '9'){
				flag = false;
			}
		}
		if(b < 9){
			cout << 0 << "\n";
		}
		else if(flag){
			cout << (a * (s.length())) << "\n";
		}
		else cout << (a * (s.length() - 1)) << "\n";
  	}
	return 0;
}