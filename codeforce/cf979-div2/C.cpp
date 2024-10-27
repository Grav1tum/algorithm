#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
int main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag = 0;
        if(s[0] == '1' || s[n - 1] == '1')
            flag = 1;
        for (int i = 1; i < n - 1; ++i){
            if (s[i] == '1' && s[i + 1] == '1')
                flag = 1;
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}