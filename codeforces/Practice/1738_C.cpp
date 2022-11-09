// Problem: C. Even Number Addicts
// Contest: Codeforces - Codeforces Global Round 22
// URL: https://codeforces.com/contest/1738/problem/C
// Memory Limit: 512 MB
// Time Limit: 2000 ms
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
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			if(v[i] % 2)odd++;
			else even++;
		}
		if(odd % 4 == 0){
			cout << "Alice\n";
		}
		else if(odd % 4 == 1){
			if(even % 2 == 1)cout << "Alice\n";
			else cout << "Bob\n";
		}
		else if(odd % 4 == 2){
			cout << "Bob\n";
		}
		else{
			cout << "Alice\n";
		}
  	}
	return 0;
}