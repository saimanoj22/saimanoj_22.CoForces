// Problem: A. Division?
// Contest: Codeforces - Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/A
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
		if(n >= 1900)cout << "Division 1\n";
		else if(n < 1900 && n >= 1600)cout << "Division 2\n";
		else if(n < 1600 && n >= 1400)cout << "Division 3\n";
		else cout << "Division 4\n";
  	}
	return 0;
}