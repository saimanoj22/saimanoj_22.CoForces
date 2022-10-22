// Problem: C. Minimize the Thickness
// Contest: Codeforces - Codeforces Round #826 (Div. 3)
// URL: https://codeforces.com/contest/1741/problem/C
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
		vector<ll> v(n);
		ll sum = 0;
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			sum += v[i];
		}
		ll mini = 1e9;
		for(ll i = 1; i <= n; i++){
			if(sum % i != 0){
				continue;
			}
			else{
				ll temp = sum / i;
				ll s = 0, count = 0, maxi = 0, total = 0;
				for(ll j = 0; j < n; j++){
					s += v[j];
					count++;
					if(s == temp){
						// cout << s << " " << count << "***\n";
						total += count;
						maxi = max(maxi, count);
						s = 0;
						count = 0;
					}
				}
				if(count > 0)maxi = max(maxi, count);
				if(total == n)mini = min(mini, maxi);
				// cout << "----\n";
			}
		}
		cout << mini << "\n";
  	}
	return 0;
}