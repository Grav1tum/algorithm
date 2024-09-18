#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        string s;
        int ans = 0;
        cin >> s;
        for (int i = 0; i < s.size(); ++i)
        {
            ans += s[i] - '0';
        }
        cout << ans << '\n';
    }
    return 0;
}