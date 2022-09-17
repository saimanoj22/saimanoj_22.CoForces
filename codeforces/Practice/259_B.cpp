// Problem: B. Little Elephant and Magic Square
// Contest: Codeforces - Codeforces Round #157 (Div. 2)
// URL: https://codeforces.com/problemset/problem/259/B
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
  	vector<vector<ll>> v;
  	ll a = 0, b = 0, c = 0;
  	for(ll i = 0; i < 3; i++){
  		vector<ll> temp;
  		for(ll j = 0; j < 3; j++){
  			ll num;
  			cin >> num;
  			temp.push_back(num);
  			if(i == 0){
  				a += num;
  			}
  			else if(i == 1){
  				b += num;
  			}
  			else if(i == 2){
  				c += num;
  			}
  		}
  		v.push_back(temp);
  	}

  	
	v[0][0] = (b + c - a) / 2;
	v[1][1] = (a + c - b) / 2;  	
	v[2][2] = (a + b - c) / 2;
	
  	for(ll i = 0; i < 3; i++){
  		for(ll j = 0; j < 3; j++){
  			cout << v[i][j] << " ";
  		}
  		cout << "\n";
  	}  	
	return 0;
}