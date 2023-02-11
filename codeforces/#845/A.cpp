// Problem: A. Everybody Likes Good Arrays!
// Contest: Codeforces - Codeforces Round #845 (Div. 2) and ByteRace 2023
// URL: https://codeforces.com/contest/1777/problem/A
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
		vector<ll> v(n);
		ll sum = 0, even = 0, odd = 0;
		for(ll i = 0; i < n; i++)cin >> v[i];
		for(ll i = 0; i < n; i++){
			if(v[i] % 2 == 0){
				even++;
				sum += max(0LL, odd - 1);
				odd = 0;
			}
			else{
				odd++;
				sum += max(0LL, even - 1);
				even = 0;
			}
		}
		sum += max(0LL, odd - 1);
		sum += max(0LL, even - 1);
		cout << sum << "\n";
  	}
	return 0;
}