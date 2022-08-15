// Problem: B. Minor Reduction
// Contest: Codeforces - Educational Codeforces Round 121 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1626/B
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
		ll max = 0, start = -1, flag = 0, end = 0, min = 0;
		for(ll i = 0; i < n - 1; i++){
			ll a = s[i] - '0';
			ll b = s[i + 1] - '0';
			
			ll sum = a + b;
			if(sum >= 10){
				max = sum;
				start = i;
			}
			if(flag == 0 && sum < 10){
				min = sum;
				end = i;
				flag = 1;
			}
		}
		if(start >= 0){
			string a = s.substr(0, start);
			string b = "";
			if(start + 2 < n)b = s.substr(start + 2);
			string c = to_string(max);
			cout << a << c << b << "\n";
		}
		else{
			string a = s.substr(0, end);
			string b = "";
			if(end + 2 < n){
				b = s.substr(end + 2);
			}
			string c = to_string(min);
			cout << a << c << b << "\n";
		}
  	}
	return 0;
}