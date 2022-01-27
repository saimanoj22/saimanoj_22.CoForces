#include <bits/stdc++.h>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int n, max = 0, min = INT_MAX, count = 0; 
        cin >> n;
        string s;
        cin >> s;
        for(int i = n-1; i >= 0; i--){
            if(s[i] == '8'){
                if(max < i)max = i;
                if(min > i)min = i;
                count++;
            }
        }
        if(count > 0){
            if((n - max >= 11) || (n- min >= 11)){
                cout << "YES\n";
            }
            else cout << "NO\n";
        }
        else cout << "NO\n";
    }
    return 0;
}
