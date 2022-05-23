// Problem: C. Double Sort
// Contest: Codeforces - Educational Codeforces Round 129 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1681/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
		//ll arr[n], brr[n], acheck[n], bcheck[n];
		vector<ll> arr, brr, acheck, bcheck;
		for(ll i = 0; i < n; i++){
			// cin >> arr[i];
			// acheck[i] = arr[i];
			int temp;
			cin >> temp;
			arr.push_back(temp);
			acheck.push_back(temp);
		}
		for(ll i = 0; i < n; i++){
			// cin >> brr[i];
			// bcheck[i] = brr[i];
			int temp;
			cin >> temp;
			brr.push_back(temp);
			bcheck.push_back(temp);
		}
		sort(acheck.begin(), acheck.end());
		sort(bcheck.begin(), bcheck.end());
		
		vector<ll> a, b;
		
		for(ll i = 0; i < n; i++){
			for(ll j = i+1; j < n; j++){
				if(arr[j] == acheck[i] && brr[j] == bcheck[i]){
					swap(arr[i], arr[j]);
					swap(brr[i], brr[j]);
					
					if(arr[i] < arr[j]){
						//cout << j+1 << " " << i+1 << "\n";
						a.push_back(j+1);
						b.push_back(i+1);
					}
					else if(arr[i] > arr[j]){
						//cout << i+1 << " " << j+1 << "\n";
						a.push_back(i+1);
						b.push_back(j+1);
					}
					else{
						if(brr[i] < brr[j]){
							//cout << j+1 << " " << i+1 << "\n";
							a.push_back(j+1);
							b.push_back(i+1);
						}
						else{
							//cout << i+1 << " " << j+1 << "\n";
							a.push_back(i+1);
							b.push_back(j+1);
						}
					}
				}
			}
		}
		
		if(arr == acheck && brr == bcheck){
			if(a.size() > 10000){
				cout << -1 << "\n";
			}
			else if(a.size() == 0){
				cout << 0 << "\n";
			}
			else{
				cout << a.size() << "\n";
				for(ll i = 0; i < a.size(); i++){
					cout << a[i] << " " << b[i] << "\n";
				}	
			}
		}
		else{
			cout << -1 << "\n";
		}
  	}
	return 0;
}