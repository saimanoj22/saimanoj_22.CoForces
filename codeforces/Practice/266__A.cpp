// Problem: A. Stones on the Table
// Contest: Codeforces - Codeforces Round #163 (Div. 2)
// URL: https://codeforces.com/problemset/problem/266/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	/*ll testcases;
	cin >> testcases;
	while(testcases--){
  	}*/
  	ll n;
  	cin >> n;
  	string s;
  	cin >> s;
  	ll count = 0, total = 0;
  	for(ll i = 1; i < n; i++){
  		if(s[i] == s[i - 1]){
  			count++;
  		}
  		else{
  			total += count--;
  			count = 0;
  		}
  	}
	total += count--;
	count = 0;
  	cout << total << "\n";
	return 0;
}