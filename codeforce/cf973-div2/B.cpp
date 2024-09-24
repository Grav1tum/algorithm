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
        ll n;
        cin >> n;
        for (int i = 1; i <= n; ++i)
            cin >> a[i];
        ll sum = 0;
        for (int i = 1; i <= n; ++i){
            sum += a[i];
        }
        sum -= 2 * a[n - 1];
        cout << sum << '\n';
    }
    return 0;
}