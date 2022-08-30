// Problem: C. Drazil and Factorial
// Contest: Codeforces - Codeforces Round #292 (Div. 2)
// URL: https://codeforces.com/problemset/problem/515/C
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
  	ll n;
  	cin >> n;
  	string s;
  	cin >> s;
  	string t = "";
  	for(ll i = 0; i < n; i++){
  		if(s[i] == '2'){
  			t += "2";
  		}
  		else if(s[i] == '3'){
  			t += "3";
  		}
  		else if(s[i] == '4'){
  			t += "2";
  			t += "2";
  			t += "3";
  		}
  		else if(s[i] == '5'){
  			t += "5";
  		}
  		else if(s[i] == '6'){
  			t += "5";
  			t += "3";
  		}
  		else if(s[i] == '7'){
  			t += "7";
  		}
  		else if(s[i] == '8'){
  			t += "2";
  			t += "2";
  			t += "2";
  			t += "7";
  		}
  		else if(s[i] == '9'){
  			t += "2";
  			t += "3";
  			t += "3";
  			t += "7";
  		}
  	}
  	sort(t.begin(), t.end(), greater<>());
  	cout << t << "\n";
	return 0;
}