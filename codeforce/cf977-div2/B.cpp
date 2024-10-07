#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
map<int, int> mp;
int main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
        mp.clear();
        int n, x;
        cin >> n >> x;
        for (int i = 1; i <= n; ++i)
        {
            int a;
            cin >> a;
            mp[a]++;
        }
        int ans = 0;
        for (;;ans++){
            if(mp[ans]){
                mp[ans]--;
                if(ans >= x){
                    mp[ans % x] += mp[ans];
                }
            }
            else{
                if(mp[ans % x] > 0){
                    mp[ans % x]--;
                }
                else{
                    break;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}