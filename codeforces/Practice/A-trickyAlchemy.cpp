#include <bits/stdc++.h>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


	long long int a, b;
	cin >> a >> b;
	long long int x, y, z;
	cin >> x >> y >> z;
	long long int yellow = 0, blue = 0, ans = 0;
	yellow = (2*x) + y;
	blue = y + (3*z);
	if(a < yellow)ans += yellow-a;
	if(b < blue)ans += blue-b;
	cout << ans << "\n";
	return 0;
}