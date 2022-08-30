// Problem: A. Cifera
// Contest: Codeforces - Codeforces Beta Round #86 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/114/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
  	ll n, k;
  	cin >> n >> k;
  	ll count = 0, flag = 0;
  	while(k > 1){
  		if(k % n != 0){
  			flag = 1;
  			break;
  		}
  		k /= n;
  		count++;
  	}
  	if(flag)cout << "NO\n";
  	else{
  		if(k == 1){
  			cout << "YES\n";
  			cout << count - 1 << "\n";
  		}
  		else cout << "NO\n";
  	}
	return 0;
}