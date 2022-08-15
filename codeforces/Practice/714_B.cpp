// Problem: B. Filya and Homework
// Contest: Codeforces - Codeforces Round #371 (Div. 2)
// URL: https://codeforces.com/problemset/problem/714/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
  	ll arr[n];
  	map<ll, ll> mp;
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  		mp[arr[i]]++;
  	}
  	if(mp.size() > 3){
  		cout << "NO\n";
  	}
  	else if(mp.size() == 3){
  		ll temp = 0;
  		vector<ll> v;
  		for(auto m : mp){
  			v.push_back(m.first - temp);
  			temp = m.first;
  		}
		if(v[1] == v[2]){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
  	}
  	else if(mp.size() == 2){
  		cout << "YES\n";
  	}
  	else{
  		cout << "YES\n";
  	}
  	
	return 0;
}