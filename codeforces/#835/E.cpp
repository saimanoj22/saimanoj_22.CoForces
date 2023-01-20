// Problem: E. Binary Inversions
// Contest: Codeforces - Codeforces Round #835 (Div. 4)
// URL: https://codeforces.com/contest/1760/problem/E
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
		ll n;
		cin >> n;
		vector<ll> v(n), a(n);
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			a[i] = v[i];
		}
		ll maxi = 0;
		ll sum = 0, count = 0;
		for(ll i = n - 1; i >= 0; i--){
			if(v[i] == 1){
				sum += count;
			}
			else{
				count++;
			}
		}
		// cout << sum << "*\n";
		maxi = max(maxi, sum);
		ll start = 0;
		while(start < n - 1 && v[start] == 1){
			start++;
		}
		if(start < n - 1){
				v[start] = 1;
				sum = 0,count = 0;
				for(ll i = n - 1; i >= 0; i--){
					if(v[i] == 1){
						sum += count;
					}
					else{
						count++;
					}
				}
				// cout << sum << "*\n";
				maxi = max(sum, maxi);
		}
		start = n - 1;
		while(start >= 0 && a[start] == 0){
			start--;
		}
		// cout << start << "--->\n";
		if(start >= 0){
				a[start] = 0;
				sum = 0,count = 0;
				for(ll i = n - 1; i >= 0; i--){
					// cout << a[i] << "-\n";
					if(a[i] == 1){
						sum += count;
					}
					else{
						count++;
					}
				}
				// cout << sum << "*\n";
				maxi = max(sum, maxi);
		}
		cout << maxi << "\n";
		
  	}
	return 0;
}