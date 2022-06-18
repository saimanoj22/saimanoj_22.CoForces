// Problem: A. Marathon
// Contest: Codeforces - Codeforces Round #799 (Div. 4)
// URL: https://codeforces.com/contest/1692/problem/A
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
		ll a, b, c, d, count= 0;
		cin >> a >> b >> c >> d;
		if(b > a)count++;
		if(c > a)count++;
		if(d > a)count++;
		cout << count << "\n";
  	}
	return 0;
}