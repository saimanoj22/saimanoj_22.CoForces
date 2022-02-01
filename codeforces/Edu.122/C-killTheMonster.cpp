#include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll ch, ca, mh, ma, k, au, hu, count = 0;
		cin >> ch >> ca >> mh >> ma >> k >> au >> hu;

		ll cturns = (ch % ma == 0) ? (ch / ma) : (ch / ma) + 1;
		ll mturns = (mh % ca == 0) ? (mh / ca) : (mh / ca) + 1;
		
		if(cturns >= mturns)cout << "YES\n";
		else{
			for(int i = 0; i <= k; i++){
				ll au_canew = ca + (i*au);
				ll hu_chnew = ch + ((k-i)*hu);
				cturns = (hu_chnew % ma == 0) ? (hu_chnew / ma) : (hu_chnew / ma) + 1;
				mturns = (mh % au_canew == 0) ? (mh / au_canew) : (mh / au_canew) + 1;
				if(cturns >= mturns)count++;
			}
			if(count > 0)cout << "YES\n";
			else cout << "NO\n";
		}

	}
	return 0;
}