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
	int n, m;
	cin >> n >> m;
	string s, t;
	cin >> s >> t;
	int min = INT_MAX, count = 0;
	vector<int> v, ans;
	for(int i = 0; i <= m-n; i++){
		v.clear();
		count = 0;
		for(int j = 0; j < n; j++){
			if(s[j] != t[i+j]){
				count++;
				v.push_back(j+1);
			}
		}
		if(min > count){
			min = count;
			ans = v;
		}
	}
	cout << min << "\n";
	for(int i = 0; i < ans.size(); i++)cout << ans[i] << " ";

	return 0;
}