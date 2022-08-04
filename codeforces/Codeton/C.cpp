// Problem: C. Virus
// Contest: Codeforces - CodeTON Round 2 (Div. 1 + Div. 2, Rated, Prizes!)
// URL: https://codeforces.com/contest/1704/problem/C
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
		ll n, m;
		cin >> n >> m;
		ll arr[m];
		for(int i = 0; i < m; i++){
			cin >> arr[i];
		}
		if(m == 1){
			cout << 2 << "\n";
		}
		else{
			sort(arr, arr + m);
			
			vector<ll> v;
			for(ll i = 1; i < m; i++){
				v.push_back(arr[i] - arr[i - 1] - 1);
			}
			
			ll last = n - arr[m - 1] + arr[0] - 1;
			if(last != 0)v.push_back(last);
			
			
			sort(v.begin(), v.end());
			
			ll sum = 0, temp = 0;
			vector<ll> w(v.size(), 0);
			for(ll i = v.size() - 1; i >= 0; i--){
				w[i] = v[i];
				w[i] -= temp;
				if(w[i] > 1){
					w[i]--;
				}
				temp += 4;
				if(w[i] <= 0){
					w[i] = 0;
					break;
				}
			}
			for(ll i = 0; i < v.size(); i++){
				sum += v[i] - w[i];
			}
			sum += m;
			cout << sum << "\n";
		}
		
  	}
	return 0;
}