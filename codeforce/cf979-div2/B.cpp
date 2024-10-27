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
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            if(i == 1)
                cout << "1";
            else
                cout << "0";
        }
        cout << "\n";
    }
    return 0;
}