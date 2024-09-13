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
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        int k = n / 2 + 1;
        cout << a[k] << '\n';
    }
    return 0;
}