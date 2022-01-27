#include<iostream>
using namespace std;
 
int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int n;
        cin >> n;
        int arr[2*n], ecount = 0, ocount = 0;
        for(int i = 0; i < 2*n;i++){
            cin >> arr[i];
            if(arr[i] % 2 == 0)ecount++;
            else ocount++;
        }
        if(ecount == ocount)cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}