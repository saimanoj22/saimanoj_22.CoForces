// Problem: C. Cypher
// Contest: Codeforces - Codeforces Round #806 (Div. 4)
// URL: https://codeforces.com/contest/1703/problem/C
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
		ll n;
		cin >> n;
		ll arr[n];
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
		}
		for(ll i = 0; i < n; i++){
			ll b;
			cin >> b;
			string s;
			cin >> s;
			for(ll j = 0; j < s.length(); j++){
				if(s[j] == 'D'){
					arr[i] += 1;
					if(arr[i] > 9){
						arr[i] = 0;
					}
				}
				else{
					arr[i] -= 1;
					if(arr[i] < 0){
						arr[i] = 9;
					}
				}
			}
		}
		for(ll i = 0; i < n; i++){
			cout << arr[i] << " ";
		}
		cout << "\n";
  	}
	return 0;
}