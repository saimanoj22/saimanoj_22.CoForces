// Problem: A. IQ Test
// Contest: Codeforces - Codeforces Round #176 (Div. 2)
// URL: http://codeforces.com/problemset/problem/287/A
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
  	char arr[4][4];
  	for(ll i = 0; i < 4; i++){
  		for(ll j = 0; j < 4; j++){
  			cin >> arr[i][j];
  		}
  	}
  	ll dot = 0, hash = 0, flag = 0;
  	for(ll i = 0; i < 4; i++){
  		for(ll j = 0; j < 4; j++){
  			hash = 0, dot = 0;
  			if(i + 1 < 4 && j + 1 < 4){
  				if(arr[i][j] == '#')hash++;
  				else dot++;
  				
  				if(arr[i + 1][j] == '#')hash++;
  				else dot++;
  				
  				if(arr[i][j + 1] == '#')hash++;
  				else dot++;
  				
  				if(arr[i + 1][j + 1] == '#')hash++;
  				else dot++;
  			}
  			if(hash >= 3 || dot >= 3){
  				flag = 1;
  				break;
  			}
  		}
  	}
  	if(flag)cout << "YES\n";
  	else cout << "NO\n";
	return 0;
}