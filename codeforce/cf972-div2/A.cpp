#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
string ss = "aeiou";
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int k = n / 5;
        string ans;
        for (int i = 0; i < n % 5; ++i){
            for (int j = 0; j < k + 1; ++j){
                ans += ss[i];
            }
        }
        for (int i = n % 5; i < 5; ++i){
            for (int j = 0; j < k; ++j){
                ans += ss[i];
            }
        }
        cout << ans << "\n";
    }
    return 0;
}