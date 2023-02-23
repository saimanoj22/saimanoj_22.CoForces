// Problem: A. Two Towers
// Contest: Codeforces - Educational Codeforces Round 143 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1795/problem/A
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
		cin >> n >> m;
		string a, b;
		cin >> a >> b;
		ll ai = -1, bi = -1;
		bool ab = true, bb = true;
		
		for(ll i = 0; i < n - 1; i++){
			if(a[i] == a[i + 1]){
				ab = false;
				if(ai >= 0)ai = min(ai, i + 1);
				else ai = i + 1;
			}
		}
		for(ll i = 0; i < m - 1; i++){
			if(b[i] == b[i + 1]){
				bb = false;
				if(bi >= 0)bi = min(bi, i + 1);
				else bi = i + 1;
			}
		}
		
		if(ab && bb){
			cout << "YES\n";
		}
		else if(!ab && !bb){
			cout << "NO\n";
		}
		else{
			if(a[n - 1] == b[m - 1])cout << "NO\n";
			else{
				bool flag = false;
				if(ab){
					for(ll i = bi; i < m - 1; i++){
						if(b[i] == b[i + 1]){
							flag = true;
						}
					}
					if(flag)cout << "NO\n";
					else cout << "YES\n";
				}
				else{
					for(ll i = ai; i < n - 1; i++){
						if(a[i] == a[i + 1]){
							flag = true;
						}
					}
					if(flag)cout << "NO\n";
					else cout << "YES\n";
				}
			}
		}
		
  	}
	return 0;
}