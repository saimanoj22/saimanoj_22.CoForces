// Problem: D. Line
// Contest: Codeforces - Codeforces Round #817 (Div. 4)
// URL: https://codeforces.com/contest/1722/problem/D
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
		string s;
		cin >> s;
		ll maxi = 0;
		for(ll i = 0; i < n; i++){
			if(s[i] == 'L'){
				maxi += i;
			}
			else{
				maxi += n - (i + 1);
			}
		}
		
		ll a = 0, b = n - 1;
		for(ll i = 0; i < n; i++){
			while(a < n && s[a] == 'R'){
				a++;
			}
			while(b >= 0 && s[b] == 'L'){
				b--;
			}
			
			ll ca = (n - (a + 1)) - a;
			ll cb = b - (n - (b + 1));
			
			ll temp = maxi + max(ca , cb);
			maxi = max(maxi, temp);
			
			if(ca > cb){
				s[a] = 'R';
				a++;
			}
			else{
				s[b] = 'L';
				b--;
			}
			cout << maxi << " ";
		}
		cout << "\n";
  	}
	return 0;
}