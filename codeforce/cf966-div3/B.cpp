#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
int vis[200005];
int main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for (int i = 0; i <= n + 1; ++i)
            vis[i] = 0;
        int flag = 1;
        for (int i = 1; i <= n; ++i){
            int x;
            cin >> x;
            if(i > 1){
                if(!vis[x - 1] && !vis[x + 1]){
                    flag = 0;
                }
            }
            vis[x] = 1;
        }
        if(flag){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}