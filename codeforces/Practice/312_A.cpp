// Problem: A. Whose sentence is it?
// Contest: Codeforces - Codeforces Round #185 (Div. 2)
// URL: https://codeforces.com/problemset/problem/312/A
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
	string s;
	getline(cin , s);
	while(testcases--){
		getline(cin , s);
		if(s.length() < 5){
			cout << "OMG>.< I don't know!\n";
		}
		else{
			string a = s.substr(0, 5);
			string b = s.substr(s.length() - 5);
			if(a == "miao." && b == "lala."){
				cout << "OMG>.< I don't know!\n";
			}
			else if (a == "miao."){
				cout << "Rainbow's\n";
			}
			else if(b == "lala."){
				cout << "Freda's\n";
			}
			else{
				cout << "OMG>.< I don't know!\n";
			}
		}
  	}
	return 0;
}