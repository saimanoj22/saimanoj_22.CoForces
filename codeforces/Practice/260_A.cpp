// Problem: A. Adding Digits
// Contest: Codeforces - Codeforces Round #158 (Div. 2)
// URL: https://codeforces.com/problemset/problem/260/A
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
  		string a;
		cin >> a;
		ll b, n;
		cin >> b >> n;
		char x = '0', ans = 'a';
		for(ll i = 0; i < 10; i++){
			string temp = a;
			temp += x;
			ll y = stoi(temp);
			if(y % b == 0){
				ans = x;
				break;
			}
			x++;
		}
		if(ans == 'a'){
			cout << -1 << "\n";
		}
		else{
			a += ans;
			for(ll i = 0; i < n - 1; i++){
				a += '0';
			}
			cout << a << "\n";
		}
	return 0;
}