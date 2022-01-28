#include <bits/stdc++.h>
using namespace std;

long long int store[100];
int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	store[0]  = 0;
	store[1]  = 1;
	store[2]  = 11;
	store[3]  = 111;
	store[4]  = 1111;
	store[5]  = 11111;
	store[6]  = 111111;
	store[7]  = 1111111;
	store[8]  = 11111111;
	store[9]  = 111111111;
	store[10] = 1111111111;
	store[11] = 11111111111;
	store[12] = 111111111111;
	store[13] = 1111111111111;

	int testcases;
	cin >> testcases;
	while(testcases--){
		long long int n;
		cin >> n;
		long long int nDigit = floor(log10(n)+1);
		long long int maxUnique = nDigit * 9;
		long long int firstDigit = n/pow(10, nDigit-1);
		long long int m =  store[nDigit]*firstDigit;
		long long int rem = 0;

		if(n<m){
			rem = 9-firstDigit+1;
		}
		else
		if(n>=m){
			rem = 9-firstDigit;
		}
		long long int ans = maxUnique - rem;

		cout << ans << "\n";
	}
	return 0;
}