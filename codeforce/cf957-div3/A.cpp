#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
int a[5];
int main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
        cin >> a[1] >> a[2] >> a[3];
        for (int i = 1; i <= 5; ++i){
            sort(a + 1, a + 4);
            a[1]++;
        }
        cout << a[1] * a[2] * a[3] << "\n";
    }
    return 0;
}