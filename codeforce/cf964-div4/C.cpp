#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
struct task{
    int l, r;
} a[200005];
bool cmp(task x, task y){
    return x.l < y.l;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
        int n, s, m;
        cin >> n >> s >> m;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i].l >> a[i].r;
        }
        sort(a + 1, a + n + 1, cmp);
        int maxn = max(a[1].l, m - a[n].r); // special case 1, n
        for (int i = 2; i <= n; ++i)
        {
            maxn = max(maxn, a[i].l - a[i - 1].r);
        }
        if(maxn >= s)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}