#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
		long long int n;
		cin >> n;
		long long int arr[n], maxEle = 0;
		for(long long int i = 0; i < n; i++){
			cin >> arr[i];
			if(maxEle < arr[i]){
				maxEle = arr[i];
			}
		}
		long long int ans = 0;
		for(long long int i = 0; i < n; i++){
			long long int temp = maxEle - arr[i];
			if(ans < temp){
				ans = temp;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}