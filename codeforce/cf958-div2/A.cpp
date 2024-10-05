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
        int n, k;
        cin >> n >> k;
        if(n == 1){
            cout << "0\n";
            continue;
        }
        if(k == 2){
            cout << n - 1 << "\n";
            continue;
        }
        int ans = n / (k - 1);
        if(n % (k - 1) > 1){
            ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}