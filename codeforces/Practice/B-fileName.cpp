#include<iostream>
using namespace std;
int main(){
    int n, xcount = 0, total = 0;
    cin >> n;
    char arr[n];
    for(int i= 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 'x'){
            xcount++;
        }
        if(arr[i] != 'x' || i == n-1){
            if(xcount > 2){
                total = total + (xcount-2);
            }
            xcount = 0;
        }
    }
    cout << total;
    return 0;
}