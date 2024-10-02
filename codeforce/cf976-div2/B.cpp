#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> k;
        int64_t l = 1, r = 2e18;
        while(l < r){
            int64_t mid = (l + r) >> 1;

            // cout << l << " " << r << "!!!\n";
            // cout << mid << " " << int64_t(mid - int64_t(sqrt(mid + 0.5))) << "???\n";
            if (int64_t(mid - int64_t(sqrt(mid + 0.5))) >= k)
            {
                r = mid;
            }
            else{
                l = mid + 1;
            }
        }
        cout << r << "\n";
    }
    return 0;
}