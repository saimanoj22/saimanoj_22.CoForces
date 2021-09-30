#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        long long int res = 1, mod = 1e9 + 7, n;
        cin >> n;
        for(int i = 2*n; i >= 3; i--){
            res = (res * i) % mod;
        }
        res = res % mod;
        cout << res << "\n";
    }
}