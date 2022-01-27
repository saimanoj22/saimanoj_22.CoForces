#include <bits/stdc++.h>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        long long int a, b, n, s;
        cin >> a >> b >> n >> s;
        if((a*n) + b == s){
            cout << "YES\n";
        }
        else{
            long long int temp = s / n;
            long long int rem = s - (min(temp, a)*n);
            if(rem <= b)cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}
