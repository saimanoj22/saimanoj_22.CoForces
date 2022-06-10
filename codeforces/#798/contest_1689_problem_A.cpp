// Problem: A. Lex String
// Contest: Codeforces - Codeforces Round #798 (Div. 2)
// URL: https://codeforces.com/contest/1689/problem/A
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
		ll n, m, k;
		cin >> n >> m >> k;
		string a, b;
		cin >> a >> b;
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		
		ll i = 0, j = 0, acount = 0, bcount = 0;
		string ans = "";
		while(1){
			if(i == a.length() || j == b.length()){
				break;
			}
			if(a[i] < b[j]){
				if(acount == k){
					ans += b[j];
					j++;
					acount = 0;
				}
				else{
					ans += a[i];
					i++;
					acount++;	
				}
				bcount = 0;
			}
			else{
				if(bcount == k){
					ans += a[i];
					i++;
					bcount = 0;
				}
				else{
					ans += b[j];
					j++;
					bcount++;
				}
				acount = 0;
			}
		}
		cout << ans << "\n";
  	}
	return 0;
}