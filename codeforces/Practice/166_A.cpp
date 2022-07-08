// Problem: A. Rank List
// Contest: Codeforces - Codeforces Round #113 (Div. 2)
// URL: http://codeforces.com/problemset/problem/166/A
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
  	ll n, k;
  	cin >> n >> k;
  	vector<vector<ll>> v;
  	for(ll i = 0; i < n; i++){
  		ll a, b;
  		cin >> a >> b;
  		vector<ll> temp;
  		temp.push_back(a);
  		temp.push_back(b);
  		v.push_back(temp);
  	}
  	
	sort(v.begin(), v.end(),
	          [](const std::vector<ll>& a, const std::vector<ll>& b) {
	  return (a[0] == b[0])?a[1] < b[1] : a[0] > b[0];
	});

  	// for(ll i = 0; i < v.size(); i++){
  		// cout << v[i][0] << " " << v[i][1] << "\n";
  	// }
  	ll start = k - 1, end = k - 1;
  	while(v[start][0] == v[k - 1][0] && v[start][1] == v[k - 1][1] && start >= 0){
  		start--;
  		if(start < 0)break;
  	}
  	start++;
  	while(v[end][0] == v[k - 1][0] && v[end][1] == v[k - 1][1]){
  		end++;
  		if(end >= v.size())break;
  	}
  	end--;
  	cout << abs(end - start) + 1 << "\n";
	return 0;
}