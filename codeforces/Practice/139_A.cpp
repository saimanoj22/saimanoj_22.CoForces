// Problem: A. Petr and Book
// Contest: Codeforces - Codeforces Beta Round #99 (Div. 2)
// URL: https://codeforces.com/problemset/problem/139/A
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
  	ll arr[7], sum = 0, flag = 0;
  	for(ll i = 0; i < 7; i++){
  		cin >> arr[i];
  		sum += arr[i];
  		if(sum >= n){
  			cout << i + 1 << "\n";
  			flag = 1;
  			break;
  		}
  	}

  	if(flag != 1){
  		ll i = 0;
  		while(1){
  			sum += arr[i];
  			if(sum >= n){
  				cout << i + 1 << "\n";
  				break;
  			}
  			i++;
  			if(i > 6){
  				 i = 0;
  			}
  		}
  	}
	return 0;
}