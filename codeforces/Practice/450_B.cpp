// Problem: B. Jzzhu and Sequences
// Contest: Codeforces - Codeforces Round #257 (Div. 2)
// URL: https://codeforces.com/problemset/problem/450/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

int main(){
	// ll testcases;
	// cin >> testcases;
	// while(testcases--){
  	// }
  	ll x, y, k;
  	cin >> x >> y >> k;
	ll z = y - x;

	ll rem = k % 3;
	ll div = k;
	if(rem == 1)div += 2;
	else if(rem == 2)div += 1;

	if((div / 3) % 2 == 0){
		if(rem == 0){
			z *= -1;
			z %= 1000000007;
			z < 0 ? cout << mod + z << "\n" : cout << z << "\n";
		}
		else if(rem == 1){
			x *= -1;
			x %= 1000000007;
			x < 0 ? cout << mod + x << "\n" : cout << x << "\n";
		}
		else{
			y *= -1;
			y %= 1000000007;
			y < 0 ? cout << mod + y << "\n" : cout << y << "\n";
		}
	}
	else{
		if(rem == 0){
			z %= 1000000007;
			z < 0 ? cout << mod + z << "\n" : cout << z << "\n";
		}
		else if(rem == 1){
			x %= 1000000007;
			x < 0 ? cout << mod + x << "\n" : cout << x << "\n";
		}
		else{
			y %= 1000000007;
			y < 0 ? cout << mod + y << "\n" : cout << y << "\n";
		}
	}
	return 0;
}