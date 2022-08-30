// Problem: B. Tavas and SaDDas
// Contest: Codeforces - Codeforces Round #299 (Div. 2)
// URL: https://codeforces.com/problemset/problem/535/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

vector<ll> v;
void generateAll(ll num, ll n){
	v.push_back(num);
	if(num >= n)return;
	generateAll(num*10+4, n);
	generateAll(num*10+7, n);
}

int main(){
	// ll testcases;
	// cin >> testcases;
	// while(testcases--){
  	// }
  	ll n;
  	cin >> n;
  	generateAll(0, n);
  	sort(v.begin(), v.end());
  	ll lower = lower_bound(v.begin(), v.end(), n) - v.begin();
  	cout << lower << "\n";
	return 0;
}