// Problem: A. Life Without Zeros
// Contest: Codeforces - Codeforces Beta Round #67 (Div. 2)
// URL: https://codeforces.com/problemset/problem/75/A
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
  	ll a, b;
  	cin >> a >> b;
  	ll sumI = a + b;
  	string s1 = to_string(a), s2 = to_string(b);
  	s1.erase(remove(s1.begin(), s1.end(), '0'), s1.end());
  	s2.erase(remove(s2.begin(), s2.end(), '0'), s2.end());
  	
  	a = stoi(s1);
  	b = stoi(s2);
  	ll sum1I = a + b;
  	
  	string sum = to_string(sumI), sum1 = to_string(sum1I);
  	
  	sum.erase(remove(sum.begin(), sum.end(), '0'), sum.end());
  	
  	if(sum == sum1) cout << "YES\n";
  	else cout << "NO\n";
  	
	return 0;
}