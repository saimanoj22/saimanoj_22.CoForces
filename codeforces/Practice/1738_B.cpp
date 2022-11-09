// Problem: B. Prefix Sum Addicts
// Contest: Codeforces - Codeforces Global Round 22
// URL: https://codeforces.com/contest/1738/problem/B
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
		ll n, k;
		cin >> n >> k;
		vector<ll> v(k);
		for(ll i = 0; i < k; i++){
			cin >> v[i];
		}
		
		if(k == 1){
			cout << "Yes\n";
		}
		else{
			vector<ll> temp;
			for(ll i = k - 1; i >= 1; i--){
				temp.push_back(v[i] - v[i - 1]);
			}
			reverse(temp.begin(), temp.end());
			
			if(is_sorted(temp.begin(), temp.end())){
				ll rem = n - k + 1;
				if(v[0] > (temp[0] * rem))cout << "No\n";
				else cout << "Yes\n";
			}
			else{
				cout << "No\n";
			}
		}
		
	
  	}
	return 0;
}