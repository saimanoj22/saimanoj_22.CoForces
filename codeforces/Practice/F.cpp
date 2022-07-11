// Problem: F. Eating Candies
// Contest: Codeforces - Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/F
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
		ll n;
		cin >> n;
		ll arr[n];
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
		}
		ll left = 0, right = 0, maxi = 0;
		ll start = 0, end = n - 1;
		while(start <= end){
			if(left <= right){
				left += arr[start];
				//cout << start << " " << left << "*\n";
				if(left == right){
					//cout << start + 1 + n - end << "-------------\n";
					maxi = max(maxi, (start + 1 + n - end - 1));
				}
				start++;
			}
			else if(left > right){
				right += arr[end];
				//cout << end << " " << right << "*\n";
				if(left == right){
					//cout << start + 1 + n - end << "-------------\n";
					maxi = max(maxi, (start + 1 + n - end - 1));
				}
				end--;
			}
		}
		cout << maxi << "\n";
  	}
	return 0;
}