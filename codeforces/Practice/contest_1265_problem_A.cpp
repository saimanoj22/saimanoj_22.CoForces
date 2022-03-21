// Problem: A. Beautiful String
// Contest: Codeforces - Codeforces Round #604 (Div. 2)
// URL: https://codeforces.com/contest/1265/problem/A
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
		ll flag = 0;
		if(s.length() == 1){
			if(s[0] == '?'){
				cout << "a" << "\n";
			}
		}
		else{
			for(ll i = 0; i < s.length(); i++){
				if(s[i] == s[i+1] && s[i] != '?'){
					flag = 1;
					break;
				}
				if(s[i] == '?' && i != 0 && i != s.length() - 1){
					if(s[i - 1] == 'a' && s[i + 1] == '?'){
						s[i] = 'b';
					}
					if(s[i - 1] == 'a' && s[i + 1] == 'a'){
						s[i] = 'b';
					}
					if(s[i - 1] == 'a' && s[i + 1] == 'b'){
						s[i] = 'c';
					}
					if(s[i - 1] == 'a' && s[i + 1] == 'c'){
						s[i] = 'b';
					}
					if(s[i - 1] == 'b' && s[i + 1] == '?'){
						s[i] = 'a';
					}
					if(s[i - 1] == 'b' && s[i + 1] == 'a'){
						s[i] = 'c';
					}
					if(s[i - 1] == 'b' && s[i + 1] == 'b'){
						s[i] = 'c';
					}
					if(s[i - 1] == 'b' && s[i + 1] == 'c'){
						s[i] = 'a';
					}
					if(s[i - 1] == 'c' && s[i + 1] == '?'){
						s[i] = 'b';
					}
					if(s[i - 1] == 'c' && s[i + 1] == 'a'){
						s[i] = 'b';
					}
					if(s[i - 1] == 'c' && s[i + 1] == 'b'){
						s[i] = 'a';
					}
					if(s[i - 1] == 'c' && s[i + 1] == 'c'){
						s[i] = 'b';
					}
				}
				else if(s[i] == '?' && i == 0){
					if(s[i + 1] == 'a'){
						s[i] = 'b';
					}
					else if(s[i + 1] == 'b'){
						s[i] = 'c';
					}
					else if(s[i + 1] == 'c'){
						s[i] = 'a';
					}
					else if(s[i + 1] == '?'){
						s[i] = 'a';
					}
				}
				else if(s[i] == '?' && i == s.length() - 1){
					if(s[i - 1] == 'a'){
						s[i] = 'b';
					}
					else if(s[i - 1] == 'b'){
						s[i] = 'c';
					}
					else if(s[i - 1] == 'c'){
						s[i] = 'a';
					}
	
				}
			}
			if(flag == 1){
				cout << -1 << "\n";
			}
			else{
				cout << s << "\n";
			}
		}
  	}
	return 0;
}