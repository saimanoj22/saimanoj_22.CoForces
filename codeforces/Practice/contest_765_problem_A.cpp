// Problem: A. Neverending competitions
// Contest: Codeforces - Codeforces Round #397 by Kaspersky Lab and Barcelona Bootcamp (Div. 1 + Div. 2 combined)
// URL: https://codeforces.com/contest/765/problem/A
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
	string home;
	cin >> home;
	ll left = 0, right = 0;
	while(testcases--){
		string s;
		cin >> s;
		string l = s.substr(0, 3);
		string r = s.substr(5, 8);
		if(l.compare(home) == 0){
			left++;
		}
		else if(r.compare(home) == 0){
			right++;
		}
  	}
  	if(left == right){
  		cout << "home\n";
  	}
  	else{
  		cout << "contest\n";
  	}
	return 0;
}