#include <bits/stdc++.h>
using namespace std;

int main(){
    int w, h;
    cin >> w >> h;
    char arr[h][w];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < w; i++){
        string temp;
        for(int j = 0; j < h; j++){
            temp += arr[j][i];
            temp += arr[j][i];
        }
        cout << temp << "\n";
        cout << temp << "\n";
    }
    return 0;
}
