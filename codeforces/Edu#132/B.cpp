// Problem: B. Also Try Minecraft
// Contest: Codeforces - Educational Codeforces Round 132 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1709/problem/B
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
		ll n, m;
		cin >> n >> m;
		ll arr[n];
		vector<ll> pre, post;
		pre.push_back(0);
		post.push_back(0);
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			if(i > 0){
				if(arr[i - 1] > arr[i])pre.push_back(abs(arr[i] - arr[i - 1]));
				else pre.push_back(0);
			}
		}
		for(ll i = n - 2; i >= 0; i--){
			if(arr[i + 1] > arr[i])post.push_back(abs(arr[i] - arr[i + 1]));
			else post.push_back(0);
		}
		for(ll i = 1; i < pre.size(); i++){
			pre[i] += pre[i - 1];
		}
		for(ll i = 1; i < post.size(); i++){
			post[i] += post[i - 1];
		}
		reverse(post.begin(), post.end());
		for(ll i = 0; i < m; i++){
			ll a, b;
			cin >> a >> b;
			a--; b--;
			if(a == b){
				cout << 0 << "\n";
			}
			else if(a < b){
				cout << abs(pre[a] - pre[b]) << "\n";
			}
			else{
				cout << abs(post[a] - post[b]) << "\n";
			}
		}
	return 0;
}