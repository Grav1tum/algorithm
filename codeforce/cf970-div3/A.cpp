#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a & 1){
            cout << "NO\n";
            continue;
        }
        if(b & 1){
            if(a >= 2){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}