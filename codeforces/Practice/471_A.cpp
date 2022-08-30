// Problem: A. MUH and Sticks
// Contest: Codeforces - Codeforces Round #269 (Div. 2)
// URL: https://codeforces.com/problemset/problem/471/A
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
  	ll arr[6];
  	for(ll i = 0; i < 6; i++){
  		cin >> arr[i];
  	}
  	sort(arr, arr + 6);
  	ll index = -1;
  	for(ll i = 0; i <= 2; i++){
  		if(arr[i] == arr[i + 1] && arr[i + 1] == arr[i + 2] && arr[i + 2] == arr[i + 3]){
  			index = i;
  			break;
  		}
  	}
  	if(index < 0){
  		cout << "Alien\n";
  	}
  	else{
  		if(index == 0){
  			ll a = arr[4];
  			ll b = arr[5];
  			if(a == b)cout << "Elephant\n";
  			else cout << "Bear\n";
  		}
  		else if(index == 1){
  			ll a = arr[0];
  			ll b = arr[5];
  			if(a == b)cout << "Elephant\n";
  			else cout << "Bear\n";
  		}
  		else{
  			ll a = arr[0];
  			ll b = arr[1];
  			if(a == b)cout << "Elephant\n";
  			else cout << "Bear\n";
  		}
  	}
	return 0;
}