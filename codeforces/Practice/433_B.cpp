// Problem: B. Kuriyama Mirai's Stones
// Contest: Codeforces - Codeforces Round #248 (Div. 2)
// URL: http://codeforces.com/problemset/problem/433/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
  	ll n;
  	cin >> n;
  	ll arr[n], brr[n], parr[n], pbrr[n];
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
		brr[i] = arr[i];
		parr[i] = arr[i];
		if(i != 0){
			parr[i] += parr[i - 1];
		}
  	}
  	sort(brr , brr + n);
  	pbrr[0] = brr[0];
  	for(ll i = 1; i < n; i++){
  		pbrr[i] = pbrr[i - 1] + brr[i];
  	}
  	ll m;
  	cin >> m;
  	for(ll i = 0; i < m; i++){
  		ll t, l, r;
  		cin >> t >> l >> r;
  		l--; r--;
  		if(t == 1){
			if(l - 1 < 0)cout << parr[r] << "\n";
			else cout << parr[r] - parr[l - 1] << "\n";
  		}
  		else{
			if(l - 1 < 0)cout << pbrr[r] << "\n";
			else cout << pbrr[r] - pbrr[l - 1] << "\n";
  		}
  	}
	return 0;
}