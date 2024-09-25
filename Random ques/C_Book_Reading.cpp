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
        ll n, m;
        cin >> n >> m;
        if(m > n) {
            cout << 0 << "\n";
            continue;
        }
        ll sum = m;
        vector<ll> digs;
        do {
            digs.push_back(sum % 10);
            sum += m;
        } while(digs[0] != sum % 10);

        ll count = digs.size();
        vector<ll> pref(count);
        pref[0] = digs[0];
        for(int i = 1; i < count; i++) pref[i] = digs[i] + pref[i - 1];
        ll meles = n / m;
        ll ans = (meles / count) * pref[count - 1];
        if(meles % count != 0) {
            ans += pref[(meles % count) - 1];
        }
        cout << ans << "\n";
    }
    return 0;
}