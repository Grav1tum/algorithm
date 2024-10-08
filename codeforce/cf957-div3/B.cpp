#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
int a[5];
int main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int maxn = 0;
        int ans = n + k - 1;
        for (int i = 1; i <= k; ++i)
        {
            int x;
            cin >> x;
            maxn = max(maxn, x);
        }
        cout << (n - maxn) - (k - 1) + (n - maxn) << "\n";
    }
    return 0;
}