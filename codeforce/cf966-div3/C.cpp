#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
map<char, int> mp;
map<int, int> vis;
map<int, char> mp2;
int a[200005];
string s;
int main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }

        int m;
        cin >> m;
        for (int i = 0; i < m; ++i){
            cin >> s;
            mp.clear();
            mp2.clear();
            int flag = 1;
            int len = s.size();
            if(len != n){
                flag = 0;
            }
            else{
                for (int k = 0; k < n; ++k)
                {
                    if(!mp[s[k]]){
                        mp[s[k]] = a[k] + 1e9 + 1; // if use map, 0 is not a good value to check whether the key is in the map or not
                    }
                    else{
                        if(mp[s[k]] != a[k] + 1e9 + 1){
                            flag = 0;
                        }
                    }
                }
                for (int k = 0; k < n; ++k){
                    if(!mp2[a[k]]){
                        mp2[a[k]] = s[k];
                    }
                    else{
                        if(mp2[a[k]] != s[k]){
                            flag = 0;
                        }
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
    }
    return 0;
}