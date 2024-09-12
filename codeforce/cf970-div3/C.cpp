#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        ll l, r;
        cin >> l >> r;
        ll temp = (r - l) * 2;
        ll ans1 = sqrt(temp + 0.5);
        ll check = (ans1 + 1) * ans1 / 2;
        if (check <= r - l)
            cout << ans1 + 1<< "\n";
        else
            cout << ans1 << "\n";
    }
    return 0;
}