// Problem: B. Disturbed People
// Contest: Codeforces - Codeforces Round #521 (Div. 3)
// URL: https://codeforces.com/contest/1077/problem/B
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
  	ll n;
  	cin >> n;
  	ll arr[n], count = 0;;
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  	}
  	for(ll i = 0; i < n; i++){
		if(arr[i - 1] == 1 && arr[i] == 0 && arr[i + 1] == 1){
			arr[i + 1] = 0;
			count++;
		}
  	}
	cout << count << "\n";
	return 0;
}