#include <bits/stdc++.h>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int n;
        cin >> n;
        int arr[n], brr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++){
            cin >> brr[i];
        }
        for(int i = 0; i < n; i++){
            if(arr[i] < brr[i])swap(arr[i], brr[i]);
        }
        sort(arr, arr+n);
        sort(brr, brr+n);
        cout << arr[n-1]*brr[n-1] << "\n";
    }
    return 0;
}

