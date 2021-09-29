#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, tcount = 0, ocount = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 2){
            tcount++;
        }
        else{
            ocount++;
        }
    }
    int temp = min(tcount,ocount);
    ocount = ocount - temp;
    int temp2 = ocount / 3;
    cout << temp + temp2;
    return 0;
}