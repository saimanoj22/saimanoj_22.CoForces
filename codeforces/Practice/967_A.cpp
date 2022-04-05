// Problem: A. Mind the Gap
// Contest: Codeforces - Codeforces Round #477 (rated, Div. 2, based on VK Cup 2018 Round 3)
// URL: https://codeforces.com/problemset/problem/967/A
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
  	ll n, s;
  	cin >> n >> s;
  	ll arr[n], i = 0;
  	for(i = 0; i < n; i++){
  		ll h, m;
  		cin >> h >> m;
		arr[i] = (h * 60) + m;
		if(i == 0){
			if(arr[i] - 0 >= s + 1){
				cout << 0 << " " << 0 << "\n";
				return 0;
			}
		}
		else{
			if(arr[i] - arr[i - 1] >= (s * 2) + 2){
				ll temp = arr[i - 1] + s + 1;
				cout << temp / 60 << " " << temp - ((temp / 60) * 60) << "\n";
				return 0;
			}
		}
  	}
	ll temp = arr[i - 1] + s + 1;
	cout << temp / 60 << " " << temp - ((temp / 60) * 60) << "\n";
	return 0;
}