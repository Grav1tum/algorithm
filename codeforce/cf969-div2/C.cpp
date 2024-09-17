#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int c[100005];
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        int k = __gcd(a, b);
        for (int i = 1; i <= n; ++i){
            cin >> c[i];
            c[i] %= k;
        }
        sort(c + 1, c + n + 1);
        int ans = c[n] - c[1];
        for (int i = 1; i < n; ++i){
            ans = min(ans, c[i] + k - c[i + 1]);
        }
        cout << ans << '\n';
    }
    return 0;
}