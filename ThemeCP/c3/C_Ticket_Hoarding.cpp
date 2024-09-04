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
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> arr(n);
        vector<pair<ll, ll>> arrsort;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            arrsort.push_back({arr[i], i});
        }
        ll bc = 0;
        vector<ll> bought(n);
        sort(all(arrsort));
        for(int i = 0; i < n; i++) {
            if(k <= m) {
                bought[arrsort[i].second] = k;
                break;
            }
            bought[arrsort[i].second] = m;
            k -= m;
        }
        // for(ll a : bought) cout << a << " ";
        // cout << "\n";
        ll ans = 0;
        for(int i = 0; i < n; i++) {
            if(bought[i] > 0) {
                ans += bought[i] * (arr[i] + bc);
                bc += bought[i];
            }
        }
        cout << ans << "\n";
    }
    return 0;
}