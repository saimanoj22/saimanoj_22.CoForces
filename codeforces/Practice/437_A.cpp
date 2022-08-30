// Problem: A. The Child and Homework
// Contest: Codeforces - Codeforces Round #250 (Div. 2)
// URL: https://codeforces.com/problemset/problem/437/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
	vector<string> v;
	for(ll i = 0; i < 4; i++){
		string s;
		cin >> s;
		s = s.substr(2);
		v.push_back(s);
	}
	ll index = -1, flag = 0;
	for(ll i = 0; i < 4; i++){
		ll count = 0, count1 = 0;
		for(ll j = 0; j < 4; j++){
			if(v[i].length() * 2 <= v[j].length()){
				count++;
			}
			if(v[j].length() * 2 <= v[i].length()){
				count1++;
			}
		}
		if(count == 3 || count1 == 3){
			index = i;
			flag++;
		}
	}
	if(flag == 1){
		cout << char('A' + index) << "\n";
	}
	else{
		cout << "C\n";
	}
	return 0;
}