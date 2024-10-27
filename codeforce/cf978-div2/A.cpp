#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
int main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
        int n, r;
        cin >> n >> r;
        int ans = 0, tmp = 0;
        for (int i = 1; i <= n; ++i)
        {
            int x;
            cin >> x;
            tmp += x % 2;
            ans += x - x % 2;
            r -= x / 2;
        }
        if(tmp < r){
            ans += tmp;
        }
        else{
            tmp -= r;
            ans += r - max(0, tmp);
        }
        cout << ans << '\n';
    }
    return 0;
}