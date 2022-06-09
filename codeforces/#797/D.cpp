// Problem: D. Black and White Stripe
// Contest: Codeforces - Codeforces Round #797 (Div. 3)
// URL: https://codeforces.com/contest/1690/problem/D
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
		ll n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		ll len = s.length(), max = 0, count = 0;
		for(ll i = 0; i < k; i++){
			if(s[i] == 'B'){
				count++;
			}
			if(max < count)max = count;
		}
		for(ll i = 1; i <= len - k; i++){
			if(s[i - 1] == 'B')count--;
			if(s[k + i - 1] == 'B')count++;
			if(max < count)max = count;
		}
		if(k > max){
			cout << k - max << "\n";
		}
		else{
			cout << 0 << "\n";
		}
  	}
	return 0;
}