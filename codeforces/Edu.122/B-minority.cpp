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
		string s;
		cin >> s;
		long long int one  = 0, zero = 0;
		for(int i = 0; i < s.length(); i++){
			if(s[i] == '0')zero++;
			else one++;
		}
		if(zero < one)cout << zero << "\n";
		else if(one  < zero)cout << one << "\n";
		else cout << (s.length() / 2) - 1 << "\n";
	}
	return 0;
}