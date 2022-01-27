#include <bits/stdc++.h>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        long long int n;
        cin >> n;
        if(n % 3 == 0){
            cout << n/3 << " " << n/3 << "\n";
        }
        else{
            int x = n/3;
            int y = (n/3) + 1;
            if((1*x) + (2*y) == n)cout << x << " " << y << "\n";
            else if((1*y) + (2*x) == n)cout << y << " " << x << "\n";
        }
    }
}
