#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
int dp[1005][5]; // need
int f1[1005][5][2]; // need is added
int f2[1005][5][2]; // need is not added
int n, m;
string demo = "narek";
int flag[1005];
string s;
void cal(int step, int pos){
    int score = 0;
    int init = pos;
    for (int i = 0; i < m; ++i)
        flag[i] = 0;
    for (int i = 0; i < m; ++i){
        if(s[i] == demo[pos]){
            flag[i] = 1;
            pos++;
        }
        if(pos == 5){
            score += 5;
            pos = 0;
        }
    }
    for (int i = 0; i < m; ++i){
        if(!flag[i]){
            for (int j = 0; j < 5; ++j){
                if(s[i] == demo[j]){
                    score--;
                    break;
                }
            }
        }
    }
    f1[step][init][0] = score;
    f1[step][init][1] = pos;
    score -= pos;
    f2[step][init][0] = score;
    f2[step][init][1] = pos;
}
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;

        for (int i = 0; i < n; ++i){
            for (int j = 0; j < 5; ++j){
                // f1[i][j] = 0;
                // f2[i][j] = 0;
                dp[i][j] = -1e9;
                if(j == 0)
                    dp[i][j] = 0;
            }
        }

        for (int i = 0; i < n; ++i)
        {
            cin >> s;
            for (int j = 0; j < 5; ++j)
            {
                cal(i, j);
            }
        }

        dp[0][f1[0][0][1]] = max(dp[0][f1[0][0][1]], f2[0][0][0]);
        for (int i = 1; i < n; ++i){
            for (int j = 0; j < 5; ++j){
                dp[i][j] = max(dp[i][j], dp[i - 1][j]);
                if (dp[i - 1][j] != 1e-9){
                    dp[i][f1[i][j][1]] = max(dp[i][f1[i][j][1]], dp[i - 1][j] + f2[i][j][0] + j);
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < 5; ++i){
            ans = max(ans, dp[n - 1][i]);
        }
        cout << ans << '\n';
    }
    return 0;
}