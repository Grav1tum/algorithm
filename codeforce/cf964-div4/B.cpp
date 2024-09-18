#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
int check(int a1, int a2, int b1, int b2){
    int ans = 0;
    if((a1 > b1 && a2 >= b2) || (a1 >= b1 && a2 > b2))
        ans++;
    if((a1 > b2 && a2 >= b1) || (a1 >= b2 && a2 > b1))
        ans++;
    if((a2 > b1 && a1 >= b2) || (a2 >= b1 && a1 > b2))
        ans++;
    if((a2 > b2 && a1 >= b1) || (a2 >= b2 && a1 > b1))
        ans++;
    return ans;
}
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        cout << check(a1, a2, b1, b2) << '\n';
    }
    return 0;
}