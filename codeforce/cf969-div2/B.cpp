#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int a[100005];
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int maxn = 0;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            maxn = max(maxn, a[i]);
        }
        for (int i = 1; i <= m; ++i){
            int l, r;
            string s;
            cin >> s >> l >> r;
            if(maxn >= l && maxn <= r){
                if(s[0] == '+')
                    maxn++;
                else
                    maxn--;
            }
            cout << maxn << ' ';
        }
        cout << '\n';
    }
    return 0;
}