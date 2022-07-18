// Problem: E. Mirror Grid
// Contest: Codeforces - Codeforces Round #806 (Div. 4)
// URL: https://codeforces.com/contest/1703/problem/E
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
		if(n == 1){
			ll a;
			cin >> a;
			cout << 0 << "\n";
		}
		else{
			char arr[n][n];
			for(ll i = 0; i < n; i++){
				for(ll j = 0; j < n; j++){
					cin >> arr[i][j];
				}
			}
			
			ll one = 0, zero = 0, ans = 0;
			for(ll i = 0; i < n / 2; i++){
				one = 0, zero = 0;
				if(arr[i][i] == '1')one++;
				else zero++;
				if(arr[i][n - i - 1] == '1')one++;
				else zero++;
				if(arr[n - i - 1][i] == '1')one++;
				else zero++;
				if(arr[n - i - 1][n - i - 1] == '1')one++;
				else zero++;
				ans += min(one, zero);
				vector<string> v;
				string temp = "";
				for(ll k = i + 1; k < n - i - 1; k++){
					temp += arr[i][k];
				}
				v.push_back(temp);
				temp = "";
				for(ll k = n - i - 2; k >= i + 1; k--){
					temp += arr[k][i];
				}
				v.push_back(temp);
				temp = "";
				for(ll k = n - i - 2; k >= i + 1; k--){
					temp += arr[n - i - 1][k];
				}
				v.push_back(temp);
				temp = "";
				for(ll k = i + 1; k < n - i - 1; k++){
					temp += arr[k][n - i - 1];
				}
				v.push_back(temp);
				temp = "";
				for(ll i = 0; i < v[0].size(); i++){
					ll o = 0, z = 0;
					for(ll j = 0; j < v.size(); j++){
						if(v[j][i] == '1')o++;
						else z++;
					}
					ans += min(o, z);
				}
				v.clear();
			}
			cout << ans << " \n";
		}
  	}
	return 0;
}