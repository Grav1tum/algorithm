#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
int a[200005];
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        int n, m, q;
        cin >> n >> m >> q;
        for (int i = 1; i <= m; ++i){
            cin >> a[i];
        }
        sort(a + 1, a + m + 1);
        for (int i = 1; i <= q; ++i){
            int k;
            cin >> k;
            int now = lower_bound(a + 1, a + m + 1, k) - a;
            // cout << now << "!!!!!!\n";
            if(now == 1){
                cout << a[1] - 1 << '\n';
            }
            else if(now > m){
                cout << n - a[m] << '\n';
            }
            else{
                int dis1 = abs(a[now] - k), dis2 = abs(a[now - 1] - k);
                int maxn = max(dis1, dis2), minn = min(dis1, dis2);
                int ans = (maxn - minn) / 2 + minn;
                cout << ans << '\n';
            }
        }
    }
    return 0;
}