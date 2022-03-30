// Problem: A. Bear and Reverse Radewoosh
// Contest: Codeforces - VK Cup 2016 - Round 1 (Div. 2 Edition)
// URL: https://codeforces.com/contest/658/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
	ll n, c;
	cin >> n >> c;
	ll q[n], t[n], li = 0, ra = 0;
	for(ll i = 0; i < n; i++){
		cin >> q[i];
	}
	for(ll i = 0; i < n; i++){
		cin >> t[i];
	}
	ll presum = 0, temp = 0;
	for(ll i = 0; i < n; i++){
		presum += t[i];
		temp = q[i] - (c * presum);
		if(temp < 0)temp = 0;
		li += temp;
	}
	presum = 0;
	for(ll i = n - 1; i >= 0; i--){
		presum += t[i];
		temp = q[i] - (c * presum);
		if(temp < 0)temp = 0;
		ra += temp;
	}
	if(li == ra)cout << "Tie\n";
	else if(li < ra)cout << "Radewoosh\n";
	else cout << "Limak\n";
	return 0;
}