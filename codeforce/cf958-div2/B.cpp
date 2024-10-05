#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
int main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n;
        string s;
        cin >> s;
        int cnt0 = 0, cnt1 = 0, pre = -1;
        for (int i = 0; i < n; ++i)
        {
            if(s[i] == '0'){
                if(pre != 0){
                    cnt0++;
                    pre = 0;
                }
            }
            else{
                cnt1++;
                pre = 1;
            }
        }
        if(cnt1 > cnt0){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
    return 0;
}