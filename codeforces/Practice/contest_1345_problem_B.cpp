// Problem: B. Card Constructions
// Contest: Codeforces - Codeforces Round #639 (Div. 2)
// URL: https://codeforces.com/contest/1345/problem/B
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
		ll limit = 0, count = 0;
		while(n > 1){
			for(ll i = 1;; i++){
				ll temp = (3 * i * i + i) / 2;
				if(temp > n){
					break;
				}
				limit = temp;
			}
			n -= limit;
			count++;
		}
		cout << count  << "\n";
  	}
	return 0;
}