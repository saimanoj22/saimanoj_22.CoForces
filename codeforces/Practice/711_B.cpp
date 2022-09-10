// Problem: B. Chris and Magic Square
// Contest: Codeforces - Codeforces Round #369 (Div. 2)
// URL: https://codeforces.com/problemset/problem/711/B
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
  	ll n;
  	cin >> n;
  	vector<vector<ll>> v;
  	vector<ll> total;
  	ll d1 = 0, d2 = 0, aa = -1, bb = -1;
  	for(ll i = 0; i < n; i++){
  		vector<ll> temp(n);
  		ll sum = 0;
  		for(ll j = 0; j < n; j++){
  			cin >> temp[j];
  			sum += temp[j];
  			if(i == j)d1 += temp[j];
  			if(i + j == n - 1)d2 += temp[j];
  			if(temp[j] == 0){
  				aa = i;
  				bb = j;
  			}
  		}
  		total.push_back(sum);
  		v.push_back(temp);
  	}
  	total.push_back(d1);
	total.push_back(d2);
	for(ll i = 0; i < n; i++){
		ll sum = 0;
		for(ll j = 0; j < n; j++){
			sum += v[j][i];
		}
		total.push_back(sum);
	}
	sort(total.begin(), total.end());

	// for(ll i = 0; i < total.size(); i++){
		// cout << total[i] << " ";
	// }
	// cout << "\n";

	ll diagonal = 0;
	if(aa + bb == n - 1){
		diagonal++;
	}
	if(aa == bb){
		diagonal++;
	}
	

	if(n == 1){
		cout << 1 << "\n";
	}
	else if(diagonal == 2){
		if(total[4] != total[total.size() - 1]){
			cout << -1 << "\n";
		}
		else if(total[0] != total[3]){
			cout << -1 << "\n";
		}
		else if(total[4] - total[3] <= 0){
			cout << -1 << "\n";
		}
		else cout << total[4] - total[3] << "\n";
	}
	else if(diagonal == 1){
		if(total[3] != total[total.size() - 1]){
			cout << -1 << "\n";
		}
		else if(total[0] != total[2]){
			cout << -1 << "\n";
		}
		else if(total[3] - total[2] <= 0){
			cout << - 1 << "\n";
		}
		else cout << total[3] - total[2] << "\n";
	}
	else{
		if(total[2] != total[total.size() - 1]){
			cout << -1 << "\n";
		}
		else if(total[0] != total[1]){
			cout << -1 << "\n";
		}
		else if(total[2] - total[1] <= 0){
			cout << -1 << "\n";
		}
		else cout << total[2] - total[1] << "\n";
	}
	  	
  	
	return 0;
}