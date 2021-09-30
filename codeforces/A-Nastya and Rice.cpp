#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int testcases;
	cin >> testcases;
	while(testcases--){
		long long int n, a, b, c, d;
		cin >> n >> a >> b >> c >> d;
		int sum = a + b;
		int diff = a - b;
		
		int summ = c + d;
		int difff = c - d;
		if((n*sum >= difff) && (n*diff <= summ))cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}