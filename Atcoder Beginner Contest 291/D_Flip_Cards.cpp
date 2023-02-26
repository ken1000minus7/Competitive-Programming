#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using namespace std;

ll mod = 998244353;

ll dostuff(int i, int num, vector<ll> &a, vector<ll> &b, vector<vector<ll>> &dp) {
    if(dp[i][num] != -1) return dp[i][num];
    if(i == a.size() - 1) {
        return 1;
    }
    ll ans = 0;
    ll curr = num == 0 ? a[i] : b[i];
    if(curr != a[i + 1]) {
        ans = (ans + dostuff(i + 1, 0, a, b , dp)) % mod;
    }
    if(curr != b[i + 1]) {
        ans = (ans + dostuff(i + 1, 1, a, b , dp)) % mod;
    }
    return dp[i][num] = ans % mod;
}

int main()
{
    FIO
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    vector<vector<ll>> dp(n, vector<ll>(2, -1));
    ll ans = (dostuff(0, 0, a, b, dp) + dostuff(0, 1, a, b, dp)) % mod;
    cout << ans << "\n";
    return 0;
}