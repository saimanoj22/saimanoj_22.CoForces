// Problem: B. Matrix Rotation
// Contest: Codeforces - Codeforces Round #839 (Div. 3)
// URL: https://codeforces.com/contest/1772/problem/B
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
		ll a, b, c, d;
		cin >> a >> b >> c >> d;
		int flag = 0;
		if(a < b && c < d && a < c && b < d){
			cout << "YES\n";
			flag = 1;
		}
		else{
			int aa = c;
			int cc = d;
			int dd = b;
			int bb = a;
			if(aa < bb && cc < dd && aa < cc && bb < dd){
				cout << "YES\n";
				flag = 1;
			}
			aa = d;
			bb = c;
			cc = b;
			dd = a;
			if(aa < bb && cc < dd && aa < cc && bb < dd){
				cout << "YES\n";
				flag = 1;
			}
			aa = b;
			bb = d;
			cc = a;
			dd = c;
			if(aa < bb && cc < dd && aa < cc && bb < dd){
				cout << "YES\n";
				flag = 1;
			}
		}
		if(flag == 0)cout << "NO\n";
  	}
	return 0;
}