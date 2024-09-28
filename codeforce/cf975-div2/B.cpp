#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
ll a[200005];
map<ll, ll> mp;
int main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
        ll n, q;    
        mp.clear();

        cin >> n >> q;
        for (ll i = 1; i <= n; ++i){
            cin >> a[i];
            mp[(i - 1) * (n - i) + n - 1]++;
        }
        for (ll i = 1; i < n; ++i){
            mp[i * (n - i)] += a[i + 1] - a[i] - 1;
        }
        while (q--){
            ll k;
            cin >> k;
            cout << mp[k] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// xy = ab
// x + y = a + b
// 减少重复计算是关键，而且要防止爆long long