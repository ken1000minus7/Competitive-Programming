#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using namespace std;

int dostuff(int i, int sum, bool done, int rem, vector<vector<vector<vector<int>>>> &dp, string &b, ll &k) {
    if(i >= b.length()) {
        if(rem == 0 && sum % k == 0 && done) {
            return 1;
        }
        else {
            return 0;
        }
    }
    if(dp[i][sum][done][rem] != -1) {
        return dp[i][sum][done][rem];
    }
    int end = 9;
    if(!done) end = b[i] - '0';
    dp[i][sum][done][rem] = 0;
    for(int j = 0; j <= end; j++) {
        bool ndone = (done || j < b[i] - '0' || (i == b.length() - 1 && j <= b[i] - '0')) ? true : false;
        dp[i][sum][done][rem] += dostuff(i + 1, sum + j, ndone, (10 * rem + j) % k, dp, b, k);
    }
    return dp[i][sum][done][rem];
}

int main()
{
    FIO
    int t;
    cin >> t;
    for(int _ = 1; _ <= t; _++) {
        ll a, b, k;
        cin >> a >> b >> k;
        if(k > 100) {
            cout << "Case " << _ << ": " << 0 << "\n";
            continue;
        }
        string as = to_string(a - 1);
        string bs = to_string(b);
        vector<vector<vector<vector<int>>>> dp1(as.length(), vector<vector<vector<int>>>(100, vector<vector<int>>(2, vector<int>(k, -1))));
        vector<vector<vector<vector<int>>>> dp2(bs.length(), vector<vector<vector<int>>>(100, vector<vector<int>>(2, vector<int>(k, -1))));
        int aans = dostuff(0, 0, 0, 0, dp1, as, k);
        int bans = dostuff(0, 0, 0, 0, dp2, bs, k);
        int ans = bans - aans;
        cout << "Case " << _ << ": " << ans << "\n";
    }
    return 0;
}