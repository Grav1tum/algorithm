#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int ans[200005];
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n & 1){
            int i = 1, j = n, step = 0;
            while(step < n){
                if(step & 1){
                    ans[i++] = n - step;
                }
                else{
                    ans[j--] = n - step;
                }
                step++;
            }
            for(int i = 1; i <= n; ++i)
                cout << ans[i] << ' ';
            cout << '\n';
        }
        else{
            cout << "-1\n";
            continue;
        }
    }
    return 0;
}