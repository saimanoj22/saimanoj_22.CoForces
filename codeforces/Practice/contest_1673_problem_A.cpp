// Problem: A. Subtle Substring Subtraction
// Contest: Codeforces - Codeforces Round #785 (Div. 2)
// URL: https://codeforces.com/contest/1673/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
		ll n = s.length(), sum = 0;
		for(ll i = 0; i < n; i++){
			sum += int(s[i]) - 96;
		}
		if(n == 1){
			cout << "Bob " << sum << "\n";
		}
		else if(n % 2 == 0){
			
			cout << "Alice " << sum << "\n";
		}
		else{
			cout << "Alice ";
			if(s[0] > s[n - 1]){
				cout << sum - 2 * (int(s[n - 1]) - 96) << "\n";
			}
			else{
				cout << sum - 2 * (int(s[0]) - 96) << "\n";
			}
		}
  	}
	return 0;
}