// Problem: A. Two 0-1 Sequences
// Contest: Codeforces - CodeTON Round 2 (Div. 1 + Div. 2, Rated, Prizes!)
// URL: https://codeforces.com/contest/1704/problem/A
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
		ll n, m;
		cin >> n >> m;
		string a, b;
		cin >> a >> b;
		bool flag = true;
		for(int i = m - 1, j = n - 1; i >= 1; i--, j--){
			if(b[i] != a[j])flag = false;
		}
		if(flag){
			bool check = false;
			for(int i = 0; i < n - m + 1; i++){
				if(a[i] == b[0])check = true;
			}
			if(check)cout << "YES\n";
			else cout << "NO\n";
		}
		else{
			cout << "NO\n";
		}
  	}
	return 0;
}