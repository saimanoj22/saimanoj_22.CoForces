// Problem: A. Kitahara Haruki's Gift
// Contest: Codeforces - Codeforces Round #248 (Div. 2)
// URL: https://codeforces.com/problemset/problem/433/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
  	ll arr[n], one = 0, two = 0, sum = 0;
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  		sum += arr[i];
  		if(arr[i] == 100)one++;
  		else two++;
  	}
  	if((sum/100) % 2 != 0){
  		cout << "NO\n";
  	}
  	else{
  		if(one == 0 && two % 2 != 0){
  			cout << "NO\n";
  		}
  		else cout << "YES\n";
  	}
	return 0;
}