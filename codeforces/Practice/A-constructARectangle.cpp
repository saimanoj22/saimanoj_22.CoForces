#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
		long long int a, b, c;
		cin >> a >> b >> c;
		if(a == b && b == c){
			if(a % 2 == 0)cout << "YES\n";
			else cout << "NO\n";
		}
		else if(a != b && b != c && c != a){
			long long int k = max(max(a,b), c);
			if(a+b+c == 2*k)cout << "YES\n";
			else cout << "NO\n";
		}
		else{
			if(a == b){
				if(c % 2 == 0)cout << "YES\n";
				else cout << "NO\n";
			}
			else if(b == c){
				if(a % 2 == 0)cout << "YES\n";
				else cout << "NO\n";
			}
			else{
				if(b % 2 == 0)cout << "YES\n";
				else cout << "NO\n";
			}
		}
	}
	return 0;
}
