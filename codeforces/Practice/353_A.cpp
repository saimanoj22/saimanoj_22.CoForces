// Problem: A. Domino
// Contest: Codeforces - Codeforces Round #205 (Div. 2)
// URL: http://codeforces.com/problemset/problem/353/A
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
	ll suma = 0, sumb = 0, temp = 0;
	for(ll i = 0; i < testcases; i++){
		ll a, b;
		cin >> a >> b;
		suma += a;
		sumb += b;
		if(a % 2 && b % 2 == 0){
			temp++;
		}
		if(b % 2 && a % 2 == 0){
			temp++;
		}
  	}
	if(suma % 2 == 0 && sumb % 2 == 0){
		cout << 0 << "\n";
	}
	else if(suma % 2 && sumb % 2){
		if(temp)cout << 1 << "\n";
		else cout << -1 << "\n";
	}
	else cout << -1 << "\n";
	return 0;
}