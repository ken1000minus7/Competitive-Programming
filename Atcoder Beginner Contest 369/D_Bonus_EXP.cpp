#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using namespace std;

int main()
{
    FIO
    int n;
    cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    function<ll(int, bool)> dostuff;
    vector<vector<ll>> dp(n, vector<ll>(2, -1));
    dostuff = [&](int i, bool even) {
        ll mul = even ? 2 : 1;
        if(i == n - 1) {
            return mul * arr[i];
        }
        if(dp[i][even] != -1) return dp[i][even];
        ll letgo = dostuff(i + 1, even);
        ll kill = mul * arr[i] + dostuff(i + 1, !even);
        return dp[i][even] = max(letgo, kill);
    };
    cout << dostuff(0, false) << "\n";
    return 0;
}