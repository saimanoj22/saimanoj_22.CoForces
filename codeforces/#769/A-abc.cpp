#include <bits/stdc++.h>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	int testcases;
	cin >> testcases;
	while(testcases--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		if(n > 2)cout << "NO\n";
		else{
			if(n == 2){
				if(s == "10" || s == "01")cout << "YES\n";
				else cout << "NO\n";
			}
			else cout << "YES\n";
		}
	}

	return 0;
}