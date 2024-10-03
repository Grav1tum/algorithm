#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
int a[100005];
int main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        for (int i = 1; i <= n; ++i)
            a[i] = 0;
        for (int i = 1; x + i <= n; ++i)
        {
            if(i & 1)
                a[x + i] = -1;
            else
                a[x + i] = 1;
        }
        for (int i = 1; y - i >= 1; ++i)
        {
            if(i & 1)
                a[y - i] = -1;
            else
                a[y - i] = 1;
        }
        for (int i = 1; i <= n; ++i){
            if(a[i] != 0)
                continue;
            a[i] = 1;
        }
        for (int i = 1; i <= n; ++i)
            cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}