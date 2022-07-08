// Problem: A. Cinema Line
// Contest: Codeforces - Codeforces Round #202 (Div. 2)
// URL: https://codeforces.com/problemset/problem/349/A
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
  	ll arr[n], tf = 0, fi = 0, flag = 0;
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  		if(arr[i] == 25)tf++;
  		else if(arr[i] == 50){
  			if(tf >= 1){
  				tf--;
  			}
  			else{
  				flag = 1;
  			}
  			fi++;
  		}
  		else if(arr[i] == 100){
  			if(fi >= 1 && tf >= 1){
				fi--;
				tf--;
  			}
  			else if(tf >= 3){
  				tf -= 3;
  			}
  			else flag = 1;
  		}
  	}
  	if(flag)cout << "NO\n";
  	else cout << "YES\n";
	return 0;
}