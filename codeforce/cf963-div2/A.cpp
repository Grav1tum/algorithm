#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
map<char, int> mp;
int main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
        mp.clear();
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < 4 * n; ++i){
            if(s[i] == '?')
                continue;
            mp[s[i]]++;
            if(mp[s[i]] <= n)
                ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}