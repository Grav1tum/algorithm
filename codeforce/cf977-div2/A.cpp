#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
ll a[55];
int main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        ll ans = (a[1] + a[2]) / 2;
        for (int i = 3; i <= n; ++i){
            ans = (ans + a[i]) / 2;
        }
        cout << ans << "\n";
    }
    return 0;
}