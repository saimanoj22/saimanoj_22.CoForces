// Problem: F. Flamingoes of Mystery
// Contest: Codeforces - 2020 ICPC, COMPFEST 12, Indonesia Multi-Provincial Contest (Unrated, Online Mirror, ICPC Rules, Teams Preferred)
// URL: https://codeforces.com/problemset/problem/1425/F
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
  	cout << "? 1 2\n";
  	cout << flush;
  	ll first;
  	cin >> first;
  	vector<ll> v;
  	ll total;
  	ll prev;
  	for(ll i = 3; i <= n; i++){
  		cout << "? 1 " << i << "\n";
  		cout << flush;
  		ll sum;
  		cin >> sum;
  		if(i == n)total = sum;
  		if(v.size() == 0)v.push_back(sum - first);
  		else v.push_back(sum - prev);
  		prev = sum;
  	}
  	cout << "? 2 " << n << "\n";
  	cout << flush;
  	ll second;
  	cin >> second;
  	ll one = total - second;
  	ll two = first - one;
  	
  	cout << "! " << one << " " << two << " ";
  	for(ll i = 0; i < v.size(); i++){
  		cout << v[i] << " ";
  	}
  	cout << "\n";
  	cout << flush;
  	
	return 0;
}