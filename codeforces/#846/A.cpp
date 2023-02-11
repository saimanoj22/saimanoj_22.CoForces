// Problem: A. Hayato and School
// Contest: Codeforces - Codeforces Round #846 (Div. 2)
// URL: https://codeforces.com/contest/1780/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n;
		cin >> n;
		vector<ll> v(n);
		ll odd = 0, even = 0;
		vector<ll> o, e;
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			if(v[i] % 2){
				odd++;
				o.push_back(i + 1);
			}
			else{ 
				even++;
				e.push_back(i + 1);
			}
		}
		if(odd == 0)cout << "NO\n";
		else if(n == 3 && even == 1)cout << "NO\n";
		else{
			cout << "YES\n";
			if(o.size() == 1 || o.size() == 2){
				for(ll i = 0; i < 2; i++)cout << e[i] << " ";
				cout << o[0] << " ";
				cout << "\n";
			}
			else{
				for(ll i = 0; i < 3; i++)cout << o[i] << " ";
				cout << "\n";
			}
		}
  	}
	return 0;
}