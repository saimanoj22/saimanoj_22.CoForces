// Problem: A. Lucky Sum
// Contest: Codeforces - Codeforces Beta Round #91 (Div. 1 Only)
// URL: https://codeforces.com/problemset/problem/121/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

vector<ll> v;
void generateAll(ll num, ll l){
	v.push_back(num);
	if(l > 11)return;
	generateAll(num*10+4, l + 1);
	generateAll(num*10+7, l + 1);
}

int main(){
	// ll testcases;
	// cin >> testcases;
	// while(testcases--){
  	// }
  	generateAll(0, 0);
  	sort(v.begin(), v.end());


  	ll l, r;
  	cin >> l >> r;
  	ll sum = 0;
  	
	for(int i = 0 ; i < v.size(); i++){
		while(l <= v[i] && l <= r){
			sum+=v[i];
			l++;
		}
	}
  	
  	cout << sum << "\n";
  	
	return 0;
}