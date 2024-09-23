#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
ll a[200005];
int main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
        int n;
        ll sum = 0;
        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            sum += a[i];
        }
        if(n <= 2){
            cout << "-1\n";
            continue;
        }
        sort(a + 1, a + n + 1);
        ll target = a[n / 2 + 1] * 2;
        ll ans = target * n + 1 - sum;
        if(ans < 0)
            ans = 0;
        cout << ans << '\n';
    }
    return 0;
}