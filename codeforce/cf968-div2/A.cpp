#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        if(s[0] == s[n - 1]){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}