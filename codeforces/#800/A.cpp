// Problem: A. Creep
// Contest: Codeforces - Codeforces Round #800 (Div. 2)
// URL: https://codeforces.com/contest/1694/problem/A
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
		string s = "";
		while(1){
			if(a > 0 && b > 0){
				s += "01";
				a--;
				b--;
			}
			else if(a > 0){
				s += "0";
				a--;
			}
			else if(b > 0){
				s += "1";
				b--;
			}
			else if(a <= 0 && b <= 0){
				break;
			}
		}
		cout << s << "\n";
  	}
	return 0;
}