#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool check(string s, int m){
    bool flag = 1;
    for (int i = 0; i < m; ++i){
        if(s[i] != '1')
            flag = 0;
    }
    for (int i = 0; i < s.size(); i += m){
        if(s[i] != '1')
            flag = 0;
    }
    for (int i = m - 1; i < s.size(); i += m){
        if(s[i] != '1')
            flag = 0;
    }
    return flag;
}
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int c = 0;
        while(c < n && s[c] == '1')
            c++;
        if(c == n){
            if(c == 1 || c == 4)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        else{
            if(n % (c - 1) != 0){
                cout << "No\n";
            }
            else{
                if(check(s, c - 1)){
                    int cnt = 0;
                    for (int i = 0; i < s.size(); ++i){
                        if(s[i] == '1')
                            cnt++;
                    }
                    int m = c - 1;
                    int k = s.size() / m;
                    if (cnt == m * 2 + (k - 2) * 2){
                        if(m == k){
                            cout << "Yes\n";
                        }
                        else{
                            cout << "No\n";
                        }
                    }
                }
                else{
                    cout << "No\n";
                }
            }
        }
    }
    return 0;
}