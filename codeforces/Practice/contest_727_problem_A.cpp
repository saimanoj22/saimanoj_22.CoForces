// Problem: A. Transformation: from A to B
// Contest: Codeforces - Technocup 2017 - Elimination Round 1 (Unofficially Open for Everyone, Rated for Div. 2)
// URL: https://codeforces.com/contest/727/problem/A
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
	ll a, b;
	cin >> a >> b;
	ll digit = b % 10;
	vector<ll> v;

	ll flag = 0;
	while(b != a){
		digit = b % 10;
		v.push_back(b);
		if(b < a){
			flag = 1;
			break;
		}
		if(b % 2 != 0 && b % 10 != 1 && b != a){
			flag = 1;
			break;
		}
		if(digit == 1){
			b--;
			b /= 10;
		}
		else{
			b /= 2;
		}
	}
	v.push_back(a);
	if(flag == 1){
		cout << "NO\n";
	}
	else{
		cout << "YES\n";
		cout << v.size() << "\n";
		for(ll i = v.size() - 1; i >= 0; i--){
			cout << v[i] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}