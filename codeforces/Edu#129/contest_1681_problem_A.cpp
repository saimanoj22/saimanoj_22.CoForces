// Problem: A. Game with Cards
// Contest: Codeforces - Educational Codeforces Round 129 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1681/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n, m;
		cin >> n;
		ll arr[n], max1 = 0, max2 = 0;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			if(max1 < arr[i])max1 = arr[i];
		}
		cin >> m;
		ll brr[m];
		for(int i = 0; i < m; i++){
			cin >> brr[i];
			if(max2 < brr[i])max2 = brr[i];
		}
		if(max1 > max2){
			cout << "Alice\n";
			cout << "Alice\n";
		}
		else if(max1 < max2){
			cout << "Bob\n";
			cout << "Bob\n";
		}
		else{
			cout << "Alice\n";
			cout << "Bob\n";
		}
		
  	}
	return 0;
}