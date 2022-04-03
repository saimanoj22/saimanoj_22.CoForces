// Problem: B. Sum of Digits
// Contest: Codeforces - Codeforces Beta Round #79 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/102/B
// Memory Limit: 265 MB
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
	string s;
	cin >> s;
	ll count = 0;
	while(1){
		if(s.length() == 1){
			break;
		}
		ll sum = 0;
		for(ll i = 0; i < s.length(); i++){
			sum += s[i] - '0';
		}
		s = to_string(sum);
		count++;
	}
	cout << count << "\n";
  	
	return 0;
}