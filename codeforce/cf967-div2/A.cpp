#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
map<int,int> mp;
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        int n, k, maxn = 0;
        mp.clear();
        cin >> n;
        for(int i = 1; i <= n; ++i){
            cin >> k;
            mp[k]++;
            maxn = max(maxn, mp[k]);
        }
        cout << n - maxn << '\n';
    }
    return 0;
}