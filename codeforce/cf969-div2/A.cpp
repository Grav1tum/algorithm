#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        if(l & 1 && r & 1){
            r++;
        }
        cout << (r - l + 1) / 4 << '\n';
    }
    return 0;
}