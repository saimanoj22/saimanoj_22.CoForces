// Problem: B. Taisia and Dice
// Contest: Codeforces - Codeforces Round #847 (Div. 3)
// URL: https://codeforces.com/contest/1790/problem/B
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
		ll n, s, r;
		cin >> n >> s >> r;
		ll last = s - r;
		n--;
		
		ll count = 0;
		while(r - n > 0){
			r = r - n;
			count++;
		}
		
		// cout << r << "*\n";
		for(ll i = 0; i < r; i++){
			cout << count + 1 << " ";
		}
		for(ll i = 0; i < n - r; i++){
			cout << count << " ";
		}
		cout << last << "\n";
  	}
	return 0;
}