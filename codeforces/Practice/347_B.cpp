// Problem: B. Fixed Points
// Contest: Codeforces - Codeforces Round #201 (Div. 2)
// URL: https://codeforces.com/problemset/problem/347/B
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
  	ll arr[n], count = 0;
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  		if(arr[i] == i)count++;
  	}
  	ll flag = 0;
  	for(ll i = 0; i < n; i++){
  		if(i != arr[i]){
  			if(arr[arr[i]] == i){
  				flag = 1;
  				count += 2;
  				break;
  			}
  		}
  	}
	if(count == n){
		cout << count << "\n";
	}
	else{
		if(flag == 0)cout << count + 1 << "\n";
		else cout << count << "\n";
	}
  	
	return 0;
}