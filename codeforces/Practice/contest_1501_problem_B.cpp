// Problem: B. Napoleon Cake
// Contest: Codeforces - Codeforces Round #707 (Div. 2, based on Moscow Open Olympiad in Informatics)
// URL: https://codeforces.com/contest/1501/problem/B
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
		ll brr[n] = {0};
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
		}
		int max = arr[n - 1];
		for(ll i = n - 1; i >= 0; i--){
			if(arr[i] >= max)max = arr[i];
			if(max > 0 && max >= arr[i]){
				brr[i] = 1;
				max--;
			}
		}
		for(ll i = 0; i < n; i++){
			cout << brr[i] << " ";
		}
		cout << "\n";
  	}
	return 0;
}