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
        int n;
        cin >> n;
        int ans = n / 4;
        if(n % 4)
            ans++;
        cout << ans << '\n';
    }
    return 0;
}