#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
string s[1005];
int main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; ++i)
            cin >> s[i];
        for (int i = 0; i < n / k; ++i){
            for (int j = 0; j < n / k; ++j){
                cout << s[i * k][j * k];
            }
            cout << '\n';
        }
    }
    return 0;
}