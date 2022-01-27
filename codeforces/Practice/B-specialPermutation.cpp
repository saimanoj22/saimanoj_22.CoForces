#include <bits/stdc++.h>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        long long int n, a, b;
        cin >> n >> a >> b;
        long long int mid = n / 2, arr[n];
        for(long long int i = 0; i < n; i++){
            arr[i] = i + 1;
        }
        if(a < b){
            if(a <= mid && b >= mid+1){
                long long int temp = arr[b-1];
                arr[b-1] = arr[a-1];
                arr[a-1] = temp;
                for(long long int i = n-1; i >= 0; i--){
                    cout << arr[i] << " ";
                }
                cout << "\n";
            }
            else{
                cout << -1 << "\n";
            }
        }
        else{
            if(a == mid + 1 && b == mid){
                sort(arr, arr+n, greater<int>());
                for(long long int i = 0; i < n; i++){
                    cout << arr[i] << " ";
                }
                cout << "\n";
            }
            else{
                cout << -1 << "\n";
            }
        }
    }
}
