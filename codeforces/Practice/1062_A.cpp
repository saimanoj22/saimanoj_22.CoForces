// Problem: A. A Prank
// Contest: Codeforces - Codeforces Round #520 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1062/A
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
  	ll arr[n+2];
  	arr[0] = 0;
  	arr[n + 1] = 1001;
  	for(int i = 1; i <= n; i++){
  		cin >> arr[i];
  	}
  	
	ll count = 0, m = 0;
	for(ll i = 1; i <= n; i++){
		if(arr[i] - arr[i - 1] == 1 && arr[i + 1] - arr[i] == 1){
			count++;
		}
		else{
			m = max(count, m);
			count = 0;
		}
	}
	m = max(count, m);
	cout << m << "\n";

  	

	return 0;
}