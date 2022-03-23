// Problem: A. Nastya Is Reading a Book
// Contest: Codeforces - Codeforces Round #546 (Div. 2)
// URL: https://codeforces.com/contest/1136/problem/A
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
	ll arr[n][2];
	for(ll i = 0; i < n; i++){
		cin >> arr[i][0] >> arr[i][1];
	}
	ll k, flag = 0;
	cin >> k;
	for(ll i = 0; i < n; i++){
		if(k >= arr[i][0] && k <= arr[i][1]){
			flag = i;
			break;
		}
	}
	cout << n - flag << "\n";
	return 0;
}