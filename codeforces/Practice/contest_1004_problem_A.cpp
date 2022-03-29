// Problem: A. Sonya and Hotels
// Contest: Codeforces - Codeforces Round #495 (Div. 2)
// URL: https://codeforces.com/contest/1004/problem/A
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
	ll n, d;
	cin >> n >> d;
	ll arr[n], brr[n];
	for(ll i = 0; i < n; i++){
		cin >> arr[i];
		if(i > 0){
			brr[i] = arr[i] - arr[i - 1];	
		}
	}
	ll count = 0;
	for(ll i = 1; i < n; i++){
		if(brr[i] == 2*d){
			count++;
		}
		else if(brr[i] > 2*d){
			count += 2;
		}
	}
	cout << count + 2 << "\n";
	
	return 0;
}