#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ,flag = 0;
    cin >> n;
    string s, temp;
    cin >> s;
    char a, b;
    for(int i = 0; i < n-1; i++){
        if(s[i] != s[i+1]){
            flag = 1;
            temp = s[i];
            temp += s[i+1];
        }
    }
    if(flag == 1){
        cout << "YES\n" << temp;
    }
    else cout << "NO";
    return 0;
}
