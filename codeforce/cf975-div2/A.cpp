#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
int a[105];
int dp[105];
int main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int maxn = 0;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            if(a[i] > maxn){
                maxn = a[i];
            }
        }
        int odd = 0, even = 0;
        for (int i = 1; i <= n; ++i){
            if(a[i] == maxn){
                if(i & 1){
                    odd++;
                }
                else{
                    even++;
                }
            }
        }
        if(odd){
            cout << n / 2 + n % 2 + maxn<< '\n';
        }
        else{
            cout << n / 2 + maxn<< '\n';
        }
    }
    return 0;
}