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
    int n;
    cin >> n;
    vector<ll> x(n) , p(n), pref(n);
    for(int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> p[i];
        pref[i] = p[i];
        if(i > 0) pref[i] += pref[i - 1];
    }
    int q;
    cin >> q;
    while(q--) {
        ll l, r;
        cin >> l >> r;
        int li = lower_bound(all(x), l) - x.begin();
        int ri = upper_bound(all(x), r) - x.begin() - 1;
        if(ri < li || ri < 0 || li >= n) {
            cout << 0 << "\n";
            continue;
        }
        cout << (pref[ri] - pref[li] + p[li]) << "\n";
    }
    return 0;
}