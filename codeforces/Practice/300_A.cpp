// Problem: A. Array
// Contest: Codeforces - Codeforces Round #181 (Div. 2)
// URL: https://codeforces.com/problemset/problem/300/A
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
  	ll arr[n], ne = 0, po = 0, ze = 0;
  	vector<ll> vne, vpo;
  	for(ll i = 0; i < n; i++){
  		cin >> arr[i];
  		if(arr[i] < 0){
  			ne++;
  			vne.push_back(arr[i]);
		}
  		else if(arr[i] > 0){
  			po++;
  			vpo.push_back(arr[i]);
  		}
  		else if(arr[i] == 0)ze++;
  	}
  	if(po == 0){
  		vpo.push_back(vne[vne.size() - 1]);
  		vpo.push_back(vne[vne.size() - 2]);
  		vne.pop_back();
  		vne.pop_back();
  	}
  	if(vne.size() % 2){
  		cout << vne.size() << " ";
  		for(ll i = 0; i < vne.size(); i++){
  			cout << vne[i] << " ";
  		}
  		cout << "\n";
  		cout << vpo.size() << " ";
  		for(ll i = 0; i < vpo.size(); i++){
  			cout << vpo[i] << " ";
  		}
  		cout << "\n";
  		cout << ze << " ";
  		for(ll i = 0; i < ze; i++){
  			cout << 0 << " ";
  		}
  		cout << "\n";
  	}
  	else{
  		cout << vne.size() - 1 << " ";
  		for(ll i = 0; i < vne.size() - 1; i++){
  			cout << vne[i] << " ";
  		}
  		cout << "\n";
  		cout << vpo.size() << " ";
  		for(ll i = 0; i < vpo.size(); i++){
  			cout << vpo[i] << " ";
  		}
  		cout << "\n";
  		cout << ze + 1 << " ";
  		for(ll i = 0; i < ze; i++){
  			cout << 0 << " ";
  		}
  		cout << vne[vne.size() - 1] << " ";
  		cout << "\n";
  	}
	return 0;
}