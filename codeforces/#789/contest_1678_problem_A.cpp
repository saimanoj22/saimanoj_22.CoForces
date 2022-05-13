// Problem: A. Tokitsukaze and All Zero Sequence
// Contest: Codeforces - Codeforces Round #789 (Div. 2)
// URL: https://codeforces.com/contest/1678/problem/A
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
		ll arr[n], count = 0;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			if(arr[i] == 0)count++;
		}
		sort(arr, arr+n);
		int temp = 0;
		for(int i = 1; i < n; i++){
			if(arr[i] != arr[i - 1])temp++;
		}
		if(count > 0){
			cout << n - count << "\n";
		}
		else if(temp == n - 1){
			cout << n + 1 << "\n";
		}
		else{
			cout << n << "\n";
		}
  	}
	return 0;
}