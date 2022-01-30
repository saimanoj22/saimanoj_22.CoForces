#include <bits/stdc++.h>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	/*int testcases;
	cin >> testcases;
	while(testcases--){

	}*/
	int n; 
	cin >> n;
	string s;
	cin >> s;
	int i = 0;
	for(i = 0; i < n; i++){
		if(s[i] == '0')break;
	}
	if(i+1 > n){
		cout << n << "\n";
	}
	else{
		cout << i + 1 << "\n";
	}
	return 0;
}