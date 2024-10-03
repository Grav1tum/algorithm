#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
int a[55];
int main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        int now = a[n], cnt = 1;
        int flag = 0;
        for (int i = n - 1; i >= 1; --i)
        {
            if(a[i] == now){
                cnt++;
            }
            else{
                if(cnt & 1){
                    flag = 1;
                    break;
                }
                else{
                    cnt = 1;
                    now = a[i];
                }
            }
            if(i == 1){
                if(cnt & 1){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
        
    }
    return 0;
}