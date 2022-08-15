// Problem: B. Phone Numbers
// Contest: Codeforces - Codeforces Round #107 (Div. 2)
// URL: https://codeforces.com/problemset/problem/151/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll n;
	cin >> n;
	vector<pair<ll, string>> taxis;
	vector<pair<ll, string>> pizzas;
	vector<pair<ll, string>> girls;
	ll maxt = 0, maxp = 0, maxg = 0;
	while(n--){
		ll t;
		cin >> t;
		string s;
		cin >> s;
		ll taxi = 0, pizza = 0, girl = 0;
		for(ll i = 0; i < t; i++){
			string a;
			cin >> a;
			a = a.substr(0, 2) + a.substr(3, 2) + a.substr(6, 2);
			bool same = true, decre = true;
			for(ll i = 1; i < a.length(); i++){
				if(a[i] != a[i - 1]){
					same = false;
				}
				if(a[i] >= a[i - 1]){
					decre = false;
				}
			}
			if(same)taxi++;
			else if(decre)pizza++;
			else girl++;
		}
		// cout << taxi << " " << pizza << " " << girl << "\n";
		maxt = max(maxt, taxi);
		maxp = max(maxp, pizza);
		maxg = max(maxg, girl);
		taxis.push_back({taxi, s});
		pizzas.push_back({pizza, s});
		girls.push_back({girl, s});
		
  	}
  	
  	vector<string> t, p, g;
  	for(ll i = 0; i < taxis.size(); i++){
  		if(taxis[i].first == maxt){
  			t.push_back(taxis[i].second);
  		}
  	}
  	for(ll i = 0; i < pizzas.size(); i++){
  		if(pizzas[i].first == maxp){
  			p.push_back(pizzas[i].second);
  		}
  	}
  	for(ll i = 0; i < girls.size(); i++){
  		if(girls[i].first == maxg){
  			g.push_back(girls[i].second);
  		}
  	}
  	
  	cout << "If you want to call a taxi, you should call:";
  	for(ll i = 0; i < t.size() - 1; i++){
  		cout << " " <<  t[i] << ",";
  	}
  	cout << " " << t[t.size() - 1] << ".\n";
  	
  	cout << "If you want to order a pizza, you should call:";
  	for(ll i = 0; i < p.size() - 1; i++){
  		cout << " " <<  p[i] << ",";
  	}
  	cout << " " << p[p.size() - 1] << ".\n";
  	
  	cout << "If you want to go to a cafe with a wonderful girl, you should call:";
  	for(ll i = 0; i < g.size() - 1; i++){
  		cout << " " <<  g[i] << ",";
  	}
  	cout << " " << g[g.size() - 1] << ".\n";
  	
	return 0;
}