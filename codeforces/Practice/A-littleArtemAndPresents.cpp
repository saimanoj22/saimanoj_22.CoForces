#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long int n, sum = 0, count = 0;
    cin >> n;
    for(int i = 1; sum <= n; i++){
        if(i % 2 != 0){
            sum += 1;
            count++;
        }
        else{
            sum += 2;
            count++;
        }
    }
    cout << count-1;
    return 0;
}