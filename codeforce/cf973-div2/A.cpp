#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        int n, x, y, ans;
        cin >> n >> x >> y;
        if(x > y){
            ans = n / y;
            if(n % y)
                ans++;
        }
        else{
            ans = n / x;
            if(n % x)
                ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}