// Problem: A. 2-3 Moves
// Contest: Codeforces - Educational Codeforces Round 133 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1716/problem/A
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
		ll n;
		cin >> n;
		n = abs(0 - n);
		if(n == 1){
			cout << 2 << "\n";
		}
		else if(n % 3 == 0){
			cout << n / 3 << "\n";
		}
		else if(n % 2 == 0){
			int count = 0;
			while(n % 3 != 0){
				n -= 2;
				count++;
			}
			cout << count + (n / 3) << "\n";
		}
		else{
			int count = 0;
			while(n % 3 != 0){
				n -= 2;
				count++;
			}
			cout << count + (n / 3) << "\n";
		}
  	}
	return 0;
}