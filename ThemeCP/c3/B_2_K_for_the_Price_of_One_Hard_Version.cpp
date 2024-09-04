#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;

int main()
{
    FIO
    int t;
    cin >> t;
    while(t--) {
        ll n, p, k;
        cin >> n >> p >> k;
        vector<ll> arr(n);
        vector<ll> pref(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(all(arr));
        for(int i = 0; i < n; i++) {
            pref[i] = arr[i];
            if(i > 0) pref[i] += pref[i - 1];
        }
        vector<ll> dp(n);
        for(int i = 0; i < n; i++) {
            if(i < k - 1) {
                dp[i] = pref[i];
            }
            else {
                dp[i] = arr[i] + (i == k - 1 ? 0 : dp[i - k]);
            }
        }
        ll ans = 0;
        for(int i = 0; i < n; i++) {
            if(dp[i] <= p) {
                ans = i + 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}