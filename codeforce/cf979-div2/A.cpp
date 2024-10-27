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
        cin >> n;
        int maxn = 0, minn = 1e9;
        for (int i = 1; i <= n; ++i){
            int x;
            cin >> x;
            minn = min(minn, x);
            maxn = max(maxn, x);
        }
        cout << (maxn - minn) * (n - 1) << "\n";
    }
    return 0;
}