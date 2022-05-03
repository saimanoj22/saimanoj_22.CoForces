// Problem: C. Odd/Even Increments
// Contest: Codeforces - Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/C
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
		ll arr[n], eeven = 0, eodd = 0, oeven = 0, oodd = 0;
		for(int i = 1; i <= n; i++){
			cin >>arr[i];
			if(i % 2 == 0){
				if(arr[i] % 2 == 0)eeven++;
				else eodd++;
			}
			else{
				if(arr[i] % 2 == 0)oeven++;
				else oodd++;		
			}
		}
		if((eeven != 0 && eodd != 0) || (oeven != 0 && oodd != 0)){
			cout << "NO\n";
		}
		else{
			cout << "YES\n";
		}
  	}
	return 0;
}