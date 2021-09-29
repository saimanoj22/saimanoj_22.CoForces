#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long int testcases;
    cin >> testcases;
    while (testcases--){
        int s[4];
        cin >> s[0];
        cin >> s[1];
        cin >> s[2];
        cin >> s[3];
        int p1 = max(s[0], s[1]);
        int p2 = max(s[2], s[3]);
        int n = sizeof(s)/sizeof(s[0]);
        sort(s, s+n);
        //for(int i = 0; i <4; i++)cout << s[i] << "\n";
        int m1 = s[3];
        int m2 = s[2];
        int f1 = 0, f2 = 0;
        //cout << "p1 p2 m1 m2\n" << p1 << p2 << m1 << m2 << endl;
        if(m1 == p1 || m1 == p2) f1 = 1;
        if(m2 == p1 || m2 == p2) f2 = 1;
        if(f1 == 1 && f2 == 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}