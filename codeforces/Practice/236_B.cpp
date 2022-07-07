// Problem: B. Easy Number Challenge
// Contest: Codeforces - Codeforces Round #146 (Div. 2)
// URL: https://codeforces.com/problemset/problem/236/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

ll findFactors(ll n){
	ll count = 0;
	for(ll i = 1; i <= sqrt(n); i++){
		if(n % i == 0){
			if(i == sqrt(n))count++;
			else count += 2;
		}
	}
	return count;
}

int main(){
	// ll testcases;
	// cin >> testcases;
	// while(testcases--){
  	// }
  	ll a, b, c;
  	cin >> a >> b >> c;
  	map<ll, ll> mp;
  	ll sum = 0;
  	for(ll i = 1; i <= a; i++){
  		for(ll j = 1; j <= b; j++){
  			for(ll k = 1; k <= c; k++){
  				ll temp = i * j * k;
  				if(mp.count(temp)){
  					sum += mp[temp];
  					sum %= 1073741824;
  				}
  				else{
  					ll x = findFactors(temp);
  					mp[temp] = x;
  					sum += x;
  					sum %= 1073741824;
  				}
  			}
  		}
  	}
  	cout << sum << "\n";
	return 0;
}