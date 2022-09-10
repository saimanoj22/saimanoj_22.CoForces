// Problem: A. Point on Spiral
// Contest: Codeforces - Codeforces Round #171 (Div. 2)
// URL: https://codeforces.com/problemset/problem/279/A
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
  	ll x, y;
  	cin >> x >> y;
  	if(x == 0 && y == 0){
  		cout << 0 << "\n";
  		return 0;
  	}
  	vector<pair<ll, ll>> v;
  	v.push_back({0, 0});
  	ll count = 0;
  	for(ll i = 1;; i++){
  		ll temp = (i / 4) + 1;
  		ll a, b;
  		if(i % 4 == 1){
			a = temp;
			b = 0 - temp + 1;
			if(x == a && y == b){
				break;
			}
			if(y == v[v.size() - 1].second && x < max(a, v[v.size() - 1].first) && x > min(a ,v[v.size() - 1].first)){
				break;
			}
			else if(x == v[v.size() - 1].first && y < max(b, v[v.size() - 1].second) && y > min(b, v[v.size() - 1].second)){
				break;
			}
			v.push_back({a, b});
			count++;
			// cout << count << "*\n";
  		}
  		else if(i % 4 == 2){
  			a = temp;
  			b = temp;
			if(x == a && y == b){
				break;
			}
			if(y == v[v.size() - 1].second && x < max(a, v[v.size() - 1].first) && x > min(a ,v[v.size() - 1].first)){
				break;
			}
			else if(x == v[v.size() - 1].first && y < max(b, v[v.size() - 1].second) && y > min(b, v[v.size() - 1].second)){
				break;
			}
			v.push_back({a, b});
			count++;
			// cout << count << "**\n";
  		}
  		else if(i % 4 == 3){
  			a = 0 - temp;
  			b = temp;
			if(x == a && y == b){
				break;
			}
			if(y == v[v.size() - 1].second && x < max(a, v[v.size() - 1].first) && x > min(a ,v[v.size() - 1].first)){
				break;
			}
			else if(x == v[v.size() - 1].first && y < max(b, v[v.size() - 1].second) && y > min(b, v[v.size() - 1].second)){
				break;
			}
			v.push_back({a, b});
			count++;
			// cout << count << "***\n";
  		}
  		else{
  			a = 0 - temp + 1;
  			b = a;
			if(x == a && y == b){
				break;
			}
			if(y == v[v.size() - 1].second && x < max(a, v[v.size() - 1].first) && x > min(a ,v[v.size() - 1].first)){
				break;
			}
			else if(x == v[v.size() - 1].first && y < max(b, v[v.size() - 1].second) && y > min(b, v[v.size() - 1].second)){
				break;
			}
			v.push_back({a, b});
			count++;
			// cout << count << "****\n";
  		}
  		// cout << v[v.size() - 1].first << " " << v[v.size() - 1].second << "\n";
  	}
  	cout << count << "\n";
	return 0;
}