// Problem: B. Mainak and Interesting Sequence
// Contest: Codeforces - Codeforces Round #819 (Div. 1 + Div. 2) and Grimoire of Code Annual Contest 2022
// URL: https://codeforces.com/contest/1726/problem/B
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
		ll n, m;
		cin >> n >> m;
		if(n == 1){
			cout << "Yes\n";
			cout << m << "\n";
		}
		else if(n > m){
			cout << "No\n";
		}
		else{
				if(n % 2){
					cout << "Yes\n";
					for(ll i = 0; i < n - 1; i++){
						cout << 1 << " ";
					}
					cout << m - n + 1 << "\n";
				}
				else if(n % 2 == 0 && m % 2 == 0){
					cout << "Yes\n";
					for(ll i = 0; i < n - 2; i++){
						cout << 1 << " ";
					}
					ll temp = n - 2;
					m = m - temp;
					cout << m / 2 << " " << m / 2 << "\n";
				}
				else if(n % 2 == 0 && m % 2){
					cout << "No\n";
				}
		}
  	}
	return 0;
}