// Problem: C. Guess the Array
// Contest: Codeforces - Technocup 2017 - Elimination Round 1 (Unofficially Open for Everyone, Rated for Div. 2)
// URL: https://codeforces.com/contest/727/problem/C
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
  	ll sum;
  	vector<ll> v;
  	
  	ll a, b, c;
  	cout << "? 1 2" << "\n";
  	cout << flush;
  	cin >> a;
  	cout << "? 2 3" << "\n";
  	cout << flush;
  	cin >> b;
  	cout << "? 3 1" << "\n";
  	cout << flush;
  	cin >> c;
  	
  	ll one = (c + a - b) / 2;
  	ll two = (a + b - c) / 2;
  	ll three = (b + c - a) / 2;
  	v.push_back(one);
  	v.push_back(two);
  	v.push_back(three);
  	
  	
  	for(ll i = 4; i <= n; i++){
  		cout << "? 1 " << i << "\n";
  		cout << flush;
  		cin >> sum;
		v.push_back(sum - one);
  	}
  	cout << "! ";
  	for(ll i = 0; i < v.size(); i++){
  		cout << v[i] << " ";
  	}
  	cout << "\n";
  	cout << flush;
	return 0;
}
// 1 2 3 4 5