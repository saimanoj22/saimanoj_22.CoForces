#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int mini = INT_MAX;
    for(int i = 0; i <= n-4; i++){
        int first, second, third, fourth;
        if(s[i] > 'A'){
            int temp = s[i] - 'A';
            first = min(temp, 26-temp);
        }
        else{
            int temp = 'A' - s[i];
            first = min(temp, 26-temp);
        }
        if(s[i+1] >= 'C'){
            int temp = s[i+1] - 'C';
            second = min(temp, 26-temp);
        }
        else{
            int temp = 'C' - s[i+1];
            second = min(temp, 26-temp);
        }
        if(s[i+2] >= 'T'){
            int temp = s[i+2] - 'T';
            third = min(temp, 26-temp);
        }
        else{
            int temp = 'T' - s[i+2];
            third = min(temp, 26-temp);
        }
        if(s[i+3] >= 'G'){
            int temp = s[i+3] - 'G';
            fourth = min(temp, 26-temp);
        }
        else{
            int temp = 'G' - s[i+3];
            fourth = min(temp, 26-temp);
        }
        int count = first+second+third+fourth;
        if(mini >= count){
            mini = count;
        }
    }
    cout << mini << "\n";
}
