// Problem: A. Dubstep
// Contest: Codeforces - Codeforces Round #130 (Div. 2)
// URL: https://codeforces.com/problemset/problem/208/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	// ll testcases;
	// cin >> testcases;
	// while(testcases--){
  	// }
  	string s;
  	cin >> s;
  	string t = "";
  	ll flag = 0;
  	if(s.length() < 3){
  		cout << s << "\n";
  	}
  	else{
	 	for(ll i = 0; i <= s.length() - 3; i++){
			string temp = "";
			temp += s.substr(i, 3);
			// cout << temp << "\n";
			if(temp != "WUB"){
				t += s[i];
			}
			else if(temp == "WUB"){
				t += " ";
				i += 2;
			}
			flag = i;
	  	}
	  	if(flag + 1 < s.length()){
	  		t += s.substr(flag + 1);
	  	}
	  	string ans = "";
	  	ll count = 0;
	  	for(ll i = 0; i < t.length(); i++){
	  		if(t[i] == ' '){
	  			count++;
	  		}
	  		else{
	  			if(count > 0)ans += " ";
	  			ans += t[i];
	  			count = 0;
	  		}
	  	}
	  	if(ans[0] == ' ')ans.erase(0, 1);
	  	if(ans[ans.length() - 1] == ' ')ans.erase(ans.length() - 1, 1);
	  	cout << ans << "\n";
  	}
 
	return 0;
}