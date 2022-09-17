// Problem: B. Lost Numbers
// Contest: Codeforces - Educational Codeforces Round 65 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1167/B
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
  	vector<ll> check = {4, 8, 15, 16, 23, 42};
  	vector<ll> v(4);
  	for(ll i = 1; i <= 4; i++){
  		cout << "? " << i << " " << i + 1 << "\n";
  		cout << flush;
  		cin >> v[i - 1];
  	}
  	
  	do{
  		ll count = 0;
  		for(ll i = 0; i < 4; i++){
  			if((check[i] * check[i + 1]) == v[i]){
  				count++;
  			}
  			if(count == 4){
  				cout << "! ";
  				for(ll i = 0; i < 6; i++){
  					cout << check[i] << " ";
  				}
  				cout << "\n";
  				cout << flush;
  				break;
  			}
  		}
  	}while(next_permutation(check.begin(), check.end()));
  	
	return 0;
}