// Problem: A. Ksenia and Pan Scales
// Contest: Codeforces - Codeforces Round #224 (Div. 2)
// URL: https://codeforces.com/problemset/problem/382/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	// ll testcases;
	// cin >> testcases;
	// while(testcases--){
  	// }
  	string s;
  	cin >> s;
  	string left = "", right = "";
  	ll flag = 0;
  	for(ll i = 0; i < s.length(); i++){
		if(s[i] == '|'){
			flag = 1;
		}
		if(flag == 0){
			left += s[i];
		}
		else{
			if(s[i] != '|'){
				right += s[i];
			}
		}
  	}
  	
  	ll lw = left.length();
  	ll rw = right.length();
  	
  	ll need = abs(lw - rw);
  	
  	string t;
  	cin >> t;
	ll rem = t.length();
	
	rem -= need;
	if(rem < 0){
		cout << "Impossible\n";
	}
	else{
		if(rem % 2){
			cout << "Impossible\n";
		}
		else{
			if(lw > rw){
				for(ll i = 0; i < need; i++){
					right += t[i];
				}
				for(ll i = need; i < t.length(); i++){
					if(i % 2)right += t[i];
					else left += t[i];
				}
				cout << left + "|" + right << "\n";
			}
			else{
				for(ll i = 0; i < need; i++){
					left += t[i];
				}
				for(ll i = need; i < t.length(); i++){
					if(i % 2)right += t[i];
					else left += t[i];
				}
				cout << left + "|" + right << "\n";
			}
		}
	}
	return 0;
}