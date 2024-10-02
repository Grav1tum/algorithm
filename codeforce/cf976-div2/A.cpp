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
        cin >> n >> k;
        ll ans = 0, temp = k;
        if(k == 1){
            cout << n << "\n";
            continue;
        }
        while (temp <= n){
            temp *= k;
        }
        while(n){
            ans += n / temp;
            n %= temp;
            temp /= k;
        }
        cout << ans << "\n";
    }
    return 0;
}