// Problem: A. Glory Addicts
// Contest: Codeforces - Codeforces Global Round 22
// URL: https://codeforces.com/contest/1738/problem/A
// Memory Limit: 512 MB
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
		vector<ll> s(n);
		ll one = 0, zero = 0;
		for(ll i = 0; i < n; i++){
			cin >> s[i];
			if(s[i] == 0)zero++;
			else one++;
		}
		vector<ll> fi, fr;
		ll sum = 0, mini = 1e9;
		for(ll i = 0; i < n; i++){
			ll a;
			cin >> a;
			if(s[i] == 0){
				fr.push_back(a);
			}
			else{
				fi.push_back(a);
			}
			sum += a;
			mini = min(mini, a);
		}
		sort(fi.begin(), fi.end(), greater<>());
		sort(fr.begin(), fr.end(), greater<>());
		if(one > zero){
			for(ll i = 0; i < zero; i++){
				sum += fr[i];
				sum += fi[i];
			}
		}
		else if(zero > one){
			for(ll i = 0; i < one; i++){
				sum += fr[i];
				sum += fi[i];
			}
		}
		else{
			sum += sum;
			sum -= mini;
		}
		cout << sum << "\n";
		
  	}
	return 0;
}