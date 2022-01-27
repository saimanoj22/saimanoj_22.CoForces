#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;
    int base = h1 + h2 + 2;
    int sides = w1 + w2 + 2;
    int top = h1 + h2;
    int rem;
    if(w1 == w2)rem = 0;
    else{
        rem = abs(w1-w2);
    }
    cout << base + sides + top + rem;
    return 0;
}