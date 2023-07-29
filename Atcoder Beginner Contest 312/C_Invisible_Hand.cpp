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
    int n, m;
    cin >> n >> m;
    vector<ll> sell(n);
    vector<ll> buy(m);
    for(int i = 0; i < n; i++) {
        cin >> sell[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> buy[i];
    }
    sort(all(sell));
    sort(all(buy));
    ll r = buy[m - 1] + 1;
    ll l = 1;
    ll ans = r;
    while(l <= r) {
        ll mid = (r - l) / 2 + l;
        int sc = upper_bound(all(sell), mid) - sell.begin();
        int bc = m - (lower_bound(all(buy), mid) - buy.begin());
        if(sc >= bc) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    cout << ans << "\n";
    return 0;
}