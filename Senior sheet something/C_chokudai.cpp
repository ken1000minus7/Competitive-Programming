#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;

ll mod = 1000000007;

int main()
{
    FIO
    string s;
    cin >> s;
    int n = s.length();
    vector<vector<ll>> dp(n + 1, vector<ll>(9, -1));
    for(int i = 0; i <= n; i++) dp[i][8] = 1;
    for(int i = 0; i < 8; i++) dp[n][i] = 0;

    string ch = "chokudai";

    auto stuff = [&](auto &&self, int i, int j) -> ll {
        if(dp[i][j] != -1) return dp[i][j];
        ll ans = self(self, i + 1, j);
        if(s[i] == ch[j]) {
            ans = (ans + self(self, i + 1, j + 1)) % mod;
        }
        return dp[i][j] = ans;
    };
    cout << stuff(stuff, 0, 0) << "\n";
    return 0;
}