// Problem: C. Different Differences
// Contest: Codeforces - Codeforces Round #839 (Div. 3)
// URL: https://codeforces.com/contest/1772/problem/C
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
		ll k, n;
		cin >> k >> n;
		if(k == n){
			for(int i = 1; i <= k; i++){
				cout << i << " ";
			}
			cout << "\n";
		}
		else{
			vector<ll> ans;
			map<ll, ll> mp;
			int i = 1, count = 0, sum = 0;
			while(count < k){
				if(i + sum > n){
					break;
				}
				else{
					ans.push_back(i + sum);
					mp[i + sum]++;
					i = i + sum;
					count++;
					sum++;
				}
			}
			if(count < k){
				ll x = ans[ans.size() - 1];
				while(count < k){
					x++;
					if(x > n)break;
					ans.push_back(x);
					mp[x]++;
					count++;
				}
			}
			if(count < k){
				for(int j = n; j >= 1; j--){
					if(count == k){
						break;
					}
					if(mp[j] == 0){
						ans.push_back(j);
						count++;
					}
				}
			}
			sort(ans.begin(), ans.end());
			for(int i = 0; i < ans.size(); i++){
				cout << ans[i] << " ";
			}
			cout << "\n";
		}

		
  	}
	return 0;
}