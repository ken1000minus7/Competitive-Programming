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
        int n;
        cin >> n;
        vector<ll> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(all(arr));
        int i = n - 1;
        vector<pair<ll, ll>> ranges;
        while(i > 0) {
            ll sum = arr[i] + arr[i - 1];
            ll maxi = sum - 1;
            ll mini = max(ll(1), arr[i] - arr[i - 1] + 1);
            ranges.push_back({mini, maxi});
            i--;
        } 
        if(ranges.size() == 0) {
            cout << 0 << "\n";
            continue;
        }
        sort(all(ranges));
        auto p = ranges[0];
        ll ans = 0;
        for(int j = 1; j < ranges.size(); j++) {
            if(p.second >= ranges[j].first) {
                p = {p.first, max(p.second, ranges[j].second)};
            }
            else {
                ans += p.second - p.first + 1;
                p = ranges[j];
            }
        }
        ans += p.second - p.first + 1;
        cout << ans << "\n";
    }
    return 0;
}