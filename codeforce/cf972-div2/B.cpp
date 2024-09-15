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
        int n, m, q;
        cin >> n >> m >> q;
        int a, b;
        cin >> a >> b;
        int stu;
        cin >> stu;
        if(stu > min(a, b) && stu < max(a,b)){
            int dis1 = abs(a - stu), dis2 = abs(b - stu);
            int maxn = max(dis1, dis2), minn = min(dis1, dis2);
            int ans = (maxn - minn) / 2 + minn;
            cout << ans << '\n';
        }
        else if(stu < min(a, b)){
            int ans = min(a, b) - 1;
            cout << ans << '\n';
        }
        else{
            int ans = n - max(a, b);
            cout << ans << '\n';
        }
    }
    return 0;
}