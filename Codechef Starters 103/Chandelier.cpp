#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using namespace std;

ll rdostuff(int i, vector<ll> &w, vector<ll> &a, vector<ll> &dp) {
    if(i >= a.size()) return 0;
    if(dp[i] != -1) return dp[i];
    ll freq = rdostuff(i + 1, w, a, dp);
    return dp[i] = max(a[i] - w[i], freq - w[i]);
}

ll ldostuff(int i, vector<ll> &w, vector<ll> &a, vector<ll> &dp) {
    if(i < 0) return 0;
    if(dp[i] != -1) return dp[i];
    ll breq = rdostuff(i - 1, w, a, dp);
    return dp[i] = max(a[i] - w[i], breq - w[i]);
}

int main()
{
    FIO
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> w(n), a(n);
        for(int i = 0; i < n; i++) {
            cin >> w[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<ll> rdp(n, -1), ldp(n, -1);
        for(int i = 0; i < n; i++) {
            ll lreq = ldostuff(i - 1, w, a, ldp);
            ll rreq = rdostuff(i + 1, w, a, rdp);
            cout << max(lreq + rreq - w[i], a[i] - w[i]) << " ";
        }
        cout << "\n";
    }
    return 0;
}