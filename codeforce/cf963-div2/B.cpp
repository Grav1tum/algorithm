#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
vector<ll> odd, even;
int main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
        even.clear();
        odd.clear();
        int n;
        cin >> n;
        int maxn = 0;
        for (int i = 1; i <= n;++i){
            ll x;
            cin >> x;
            if(x & 1)
                odd.push_back(x);
            else
                even.push_back(x);
        }
        if(!odd.size() || !even.size()){
            cout << "0\n";
        }
        else{
            sort(odd.begin(), odd.end());
            sort(even.begin(), even.end());
            int ans = even.size();
            ll maxn = odd[odd.size() - 1];
            for (int i = 0; i < even.size(); ++i){
                if(maxn > even[i]){
                    maxn += even[i];
                }
                else{
                    ans++;
                    break;
                }
            }
            cout << ans << '\n';
        }
    }
    return 0;
}