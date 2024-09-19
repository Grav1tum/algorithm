#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        ll x, y, k;
        cin >> x >> y >> k;
        ll sum = 0;
        for (int i = 101; i < 100 + k; ++i)
        {
            cout << i << " " << i << "\n";
            sum += i;
        }
        cout << x * k - sum << " " << y * k - sum<< "\n";
    }
    return 0;
}