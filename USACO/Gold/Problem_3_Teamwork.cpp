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
    int n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<ll> dp(n, -1);
    function<ll(int)> dostuff;
    dostuff = [&](int i) -> ll {
        if(i >= n) return 0;
        if(dp[i] != -1) return dp[i];
        ll maxi = 0;
        ll ans = 0;
        for(int j = i; j < i + k && j < n; j++) {
            maxi = max(maxi, arr[j]);
            ans = max(ans, maxi * (j - i + 1) + dostuff(j + 1));
        }
        return dp[i] = ans;
    };
    cout << dostuff(0) << "\n";
    return 0;
}