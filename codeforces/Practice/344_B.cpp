// Problem: B. Simple Molecules
// Contest: Codeforces - Codeforces Round #200 (Div. 2)
// URL: https://codeforces.com/problemset/problem/344/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
	
	ll a, b, c;
	cin >> a >> b >> c;
	
	ll flag = 0;
	for(ll i = 0; i <= min(a, b); i++){
		ll y = b - i;
		ll z = a - i;
		if(y + z == c){
			cout << i << " " << y << " " << z << "\n";
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		cout << "Impossible\n";
	}
	
	return 0;
}