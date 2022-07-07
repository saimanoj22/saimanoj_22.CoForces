// Problem: B. Unlucky Ticket
// Contest: Codeforces - Codeforces Round #111 (Div. 2)
// URL: https://codeforces.com/problemset/problem/160/B
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
  	n *= 2;
  	string s;
  	cin >> s;
  	string first = s.substr(0, n / 2);
  	string second = s.substr(n / 2, n / 2);
  	
  	sort(first.begin(), first.end());
  	sort(second.begin(), second.end());
  	
  	ll po = 0, ne = 0, zero = 0;
  	for(ll i = 0; i < n / 2; i++){
  		if(first[i] - second[i] > 0)po++;
  		else if(first[i] - second[i] < 0)ne++;
  		else zero++;
  	}
	if(zero > 0)cout << "NO\n";
	else if(po == 0 || ne == 0)cout << "YES\n";
	else cout << "NO\n";

	return 0;
}