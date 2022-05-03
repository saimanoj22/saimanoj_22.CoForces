// Problem: B. Vasya and Public Transport
// Contest: Codeforces - Codeforces Round #206 (Div. 2)
// URL: https://codeforces.com/contest/355/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	/*ll testcases;
	cin >> testcases;
	while(testcases--){
		
  	}*/
  	ll a, b, c, d;
  	cin >> a >> b >> c >> d;
  	ll n, m;
  	cin >> n >> m;
  	ll arr[n], brr[m], mina = 0, minb = 0;;
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  		mina += min(arr[i]*a, b);
  	}
  	for(ll i = 0; i < m; i++){
  		cin >> brr[i];
  		minb += min(brr[i]*a, b);
  	}

  	mina = min(mina, c);
  	minb = min(minb, c);
  	cout << min(mina + minb, d) << "\n";
	return 0;
}