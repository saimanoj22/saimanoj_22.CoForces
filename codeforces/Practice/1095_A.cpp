// Problem: A. Repeating Cipher
// Contest: Codeforces - Codeforces Round #529 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1095/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	/*ll testcases;
	cin >> testcases;
	while(testcases--){
		
  	}*/
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string s1 = "";
    for(ll i = 1; ; i++){
        ll temp = (i * (i + 1)) / 2;
        s1 += s[temp - 1];
        if(temp == n){
            break;
        }
    }
    cout << s1 << "\n";
	return 0;
}