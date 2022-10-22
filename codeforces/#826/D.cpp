// Problem: D. Masha and a Beautiful Tree
// Contest: Codeforces - Codeforces Round #826 (Div. 3)
// URL: https://codeforces.com/contest/1741/problem/D
// Memory Limit: 256 MB
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
		ll m;
		cin >> m;
		vector<ll> v(m);
		for(ll i = 0; i < m; i++){
			cin >> v[i];
		}
			
		bool flag = false;
		ll count = 0;
		while(v.size() > 1){
			
			// for(ll i = 0; i < v.size(); i++){
				// cout << v[i] << " ";
			// }
			// cout << "\n";
			

			vector<ll> temp;
			for(ll i = 1; i < v.size(); i += 2){
				if(abs(v[i] - v[i - 1]) != 1){
					flag = true;
					break;
				}
				if(v[i] < v[i - 1])count++;
				if(v[i] % 2 == 0)temp.push_back((v[i] / 2));
				else temp.push_back((v[i - 1] / 2));
			}
			v = temp;
		}
		if(flag){
			cout << -1 << "\n";
		}
		else{
			cout << count << "\n";
		}
		
  	}
	return 0;
}