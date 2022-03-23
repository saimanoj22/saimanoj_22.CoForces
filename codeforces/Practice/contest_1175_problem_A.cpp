// Problem: A. From Hero to Zero
// Contest: Codeforces - Educational Codeforces Round 66 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1175/problem/A
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
		ll n, k;
		cin >> n >> k;
		ll count = 0;
		while(n > 0){
			if(n % k == 0){
				n = n / k;
				count++;
			}
			else{
				ll rem = n % k;
				count += rem;
				n -= rem;
			}
		}
		cout << count << "\n";
  	}
	return 0;
}