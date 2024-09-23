#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int num = k / 2;
        if(n & 1 && k & 1)
            num++;
        if (num & 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}