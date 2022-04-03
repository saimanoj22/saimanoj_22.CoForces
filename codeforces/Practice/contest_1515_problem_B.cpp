// Problem: B. Phoenix and Puzzle
// Contest: Codeforces - Codeforces Global Round 14
// URL: https://codeforces.com/contest/1515/problem/B
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
		ll n;
		cin >> n;
		if(n == 2 || n == 4){
			cout << "YES\n";
		}
		else{
			int a = sqrt(n / 2);
			int b = sqrt(n / 4);
			if(n % 2 == 0 && a*a == (n / 2)){
				cout << "YES\n";
			}
			else if(n % 4 == 0 && b*b == (n / 4)){
				cout << "YES\n";
			}
			else{
				cout << "NO\n";
			}
		}
		
  	}
	return 0;
}