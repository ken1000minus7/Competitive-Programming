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
    int n, m;
    cin >> n >> m;
    vector<int> broken(n);
    for(int i = 0; i < m; i++) {
        int a;
        cin >> a;
        broken[a]++;
    }
    vector<ll> dp(n + 1);
    dp[n] = 1;
    for(int i = n - 1; i >= 0; i--) {
        if(broken[i]) continue;
        dp[i] = dp[i + 1];
        if(i < n - 1) dp[i] = (dp[i] + dp[i + 2]) % mod;
    }
    cout << dp[0] << "\n";
    return 0;
}