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
		if(n % 7 == 0)cout << n << "\n";
		else if (n < 10)cout << 7 << "\n";
		else{
			int temp = n / 10;
			for(int i = 0; i < 10; i++){
				if((temp - (i*2)) % 7 == 0){
					cout << (temp * 10) + i << "\n";
					break;
				}
			}
		}
	}
	return 0;
}