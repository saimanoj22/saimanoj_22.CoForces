// Problem: A. Round House
// Contest: Codeforces - Codeforces Round #346 (Div. 2)
// URL: https://codeforces.com/contest/659/problem/A
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
  	ll n, a, b;
  	cin >> n >> a >> b;
  	if(b > 0){
  		while(b--){
  			a++;
  			if(a == n + 1){
  				a = 1;
  			}
  		}
  		cout << a << "\n";
  	}
  	else{
  		b = b * -1;
  		while(b--){
  			a--;
  			if(a == 0){
  				a = n;
  			}
  		}
  		cout << a << "\n";
  	}
  	
	return 0;
}