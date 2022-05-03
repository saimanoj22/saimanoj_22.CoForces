// Problem: B. Dictionary
// Contest: Codeforces - Codeforces Round #786 (Div. 3)
// URL: https://codeforces.com/contest/1674/problem/B
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
		string s;
		cin >> s;
		int first = int(s[0]) - 96;
		first = (first - 1) * 25;
		int second = int(s[1]) - 96;
		if(s[0] < s[1]){
			second--;
		}
		cout << first + second << "\n";
  	}
	return 0;
}