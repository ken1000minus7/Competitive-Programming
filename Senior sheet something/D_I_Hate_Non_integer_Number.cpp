#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;

ll mod = 998244353;

int main()
{
    FIO
    int n;
    cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll ans = 0;
    for(ll sz = 1; sz <= n; sz++) {
        vector<vector<vector<ll>>> dp(n, vector<vector<ll>>(n + 1, vector<ll>(sz, -1)));
        // cout << sz << "\n";
        auto stuff = [&](auto &&self, int i, int j, int k) -> ll {
            // cout << i << " " << j << " " << k << "\n";
            if(j == 0) {
                return (k == 0);
            }
            if(n - i < j) return 0;
            if(dp[i][j][k] != -1) return dp[i][j][k];
            return dp[i][j][k] = ((self(self, i + 1, j - 1, (k + arr[i]) % sz) % mod) + (self(self, i + 1, j, k) % mod)) % mod;
        };
        ans = (ans + stuff(stuff, 0, sz, 0)) % mod;
    }
    cout << ans << "\n";
    return 0;
}