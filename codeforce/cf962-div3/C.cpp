#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
string a, b;
int cnta[26][200005], cntb[26][200005];
int main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        cin >> a >> b;
        for (int i = 0; i < 26; ++i)
        {
            for (int j = 0; j <= n; ++j){
                cnta[i][j] = 0;
                cntb[i][j] = 0;
            }
        }
        for (int j = 0; j < n; ++j){
            for (int i = 0; i < 26; ++i){
                if(i == a[j] - 'a'){
                    cnta[i][j + 1] = cnta[i][j] + 1;
                }
                else{
                    cnta[i][j + 1] = cnta[i][j];
                }
            }
        }
        for (int j = 0; j < n; ++j){
            for (int i = 0; i < 26; ++i){
                if(i == b[j] - 'a'){
                    cntb[i][j + 1] = cntb[i][j] + 1;
                }
                else{
                    cntb[i][j + 1] = cntb[i][j];
                }
            }
        }
        while(q--){
            int l, r;
            cin >> l >> r;
            int diff = 0;
            for (int i = 0; i < 26; ++i){
                int numa = cnta[i][r] - cnta[i][l - 1];
                int numb = cntb[i][r] - cntb[i][l - 1];
                diff += abs(numa - numb);
            }
            int ans = diff / 2;
            // cout << diff << "!!!\n";
            if (diff % 2)
                ans++;
            cout << ans << '\n';
        }
    }
    return 0;
}