// #include<bits/stdc++.h>
// using namespace std;
// #define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define ll long long
// int a[15005], b[15005], c[15005];
// int vis[15005];
// void init()
// {
//     for (int i = 1; i <= 15000; ++i)
//         vis[i] = 1e9;
//     for (int i = 1; i <= 5000; ++i)
//     {
//         for (int j = i + 1; j <= 5000; ++j)
//         {
//             int k = sqrt(i * i + j * j + 0.5);
//             if (i + j + k > 15000)
//                 break;
//             if (k * k == i * i + j * j)
//             {
//                 if (vis[i + j + k] > i + j + k)
//                 {
//                     vis[i + j + k] = i + j + k;
//                     a[i + j + k] = i;
//                     b[i + j + k] = j;
//                     c[i + j + k] = k;
//                 }
//             }
//         }
//     }
//     int la = 1e7, lb = 1e7, lc = 1e7;
//     for (int i = 15000; i >= 1; --i)
//     {
//         if(vis[i] != 1e9){
//             la = a[i];
//             lb = b[i];
//             lc = c[i];
//         }
//         else{
//             a[i] = la;
//             b[i] = lb;
//             c[i] = lc;
//         }
//     }
// }
// int main()
// {
//     fast;
//     int t;
//     cin >> t;
//     init();
//     while (t--)
//     {
//         int num;
//         cin >> num;
//         cout << a[num] << " " << b[num] << " " << c[num] << "\n";
//     }
//     return 0;
// }
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
        cin >> n >> k;
        if(k == 0){
            cout << "0\n";
            continue;
        }
        int now = k - n;
        int ans = 1, step = n - 1;
        while(now > 0){
            now -= step;
            ans++;
            if(now <= 0)
                break;
            now -= step;
            ans++;
            step--;
        }
        cout << ans << "\n";
    }
    return 0;
}