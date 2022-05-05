// Problem: C. Detective Task
// Contest: Codeforces - Codeforces Round #787 (Div. 3)
// URL: https://codeforces.com/contest/1675/problem/C
// Memory Limit: 256 MB
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
		string s;
		cin >> s;
		ll n = s.length();
		ll one = -1, zero = n;
		bool isOne = false, isZero = false;
		for(ll i = 0; i < n; i++){
			if(s[i] == '1'){
				isOne = true;
				one = i;
			}
		}
		for(ll i = n - 1; i >= 0; i--){
			if(s[i] == '0'){
				isZero = true;
				zero = i;
			}
		}
		if(!isOne && !isZero){
			cout << n << "\n";
		}
		else if(!isOne && isZero){
			cout << zero - one << "\n";
		}
		else if(isOne && !isZero){
			cout << zero - one << "\n";
		}
		else{
			cout << zero - one + 1 << "\n";
		}
  	}
	return 0;
}