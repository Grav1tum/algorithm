#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int now = 0, ans = 0;
        for (int i = 1; i <= n; ++i)
        {
            int x;
            cin >> x;
            if(x >= k)
                now += x;
            else if(x == 0){
                if(now){
                    now--;
                    ans++;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}