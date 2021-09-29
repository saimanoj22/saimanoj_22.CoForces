#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int n, zero = 0, sum = 0, ans = 0;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] == 0)zero++;
            sum += arr[i];
        }
        if(zero > 0)ans += zero;
        if(sum + zero*1 == 0)ans += 1;
        cout << ans << "\n";
    }
    return 0;
}