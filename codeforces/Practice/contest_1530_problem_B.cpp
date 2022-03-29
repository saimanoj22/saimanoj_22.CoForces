// Problem: B. Putting Plates
// Contest: Codeforces - Codeforces Round #733 (Div. 1 + Div. 2, based on VK Cup 2021 - Elimination (Engine))
// URL: https://codeforces.com/contest/1530/problem/B
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
		ll h, w;
		cin >> h >> w;
		if(h % 2 != 0){
			for(ll i = 0; i < h; i++){
				for(ll j = 0; j < w; j++){
					if(i % 2 == 0){
						if(i == 0 || i == h - 1){
							if(j % 2 == 0){
								cout << 1;
							}
							else{
								cout << 0;
							}						
						}
						else{
							if(j == 0 || j == w - 1){
								cout << 1;
							}
							else cout << 0;
						}
					}
					else{
						cout << 0;
					}
				}
				cout << "\n";
			}
		}
		else{
			for(ll i = 0; i < h; i++){
				for(ll j = 0; j < w; j++){
					if(i % 2 == 0){
						if(i == 0){
							if(j % 2 == 0){
								cout << 1;
							}
							else{
								cout << 0;
							}						
						}
						else{
							if(j == 0 || j == w - 1){
								cout << 1;
							}
							else cout << 0;
						}
					}
					else{
						if(i == h - 1){
							if(j == 0 || j == 1 || j == w - 2 || j == w - 1){
								cout << 0;
							}
							else{
								if(j % 2 == 0){
									cout << 1;
								}
								else{
									cout << 0;
								}
							}
						}
						else{
							cout << 0;
						}
					}
				}
				cout << "\n";
			}
		}
		cout << "\n";
  	}
	return 0;
}