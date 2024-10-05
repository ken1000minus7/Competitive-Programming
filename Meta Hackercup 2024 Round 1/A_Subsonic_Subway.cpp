#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using ll = long long;
using ld = long double;
using namespace std;

int main()
{
    freopen("subsonic_subway_validation_input.txt", "r", stdin);
    freopen("aoutput.txt", "w", stdout);
    FIO
    int t;
    cin >> t;
    for(int _ = 1; _ <= t; _++) {
        int n;
        cin >> n;
        vector<pair<ld, ld>> intervals;
        for(int i = 0; i < n; i++) {
            ld a, b;
            cin >> a >> b;
            intervals.push_back({(i + 1) / max(ld(0.000001), b), (i + 1) / max(ld(0.000001), a)});
        }
        bool op = true;
        sort(all(intervals));
        auto p = intervals[0];
        for(int i = 1; i < n; i++) {
            if(p.second >= intervals[i].first) {
                p = { max(p.first, intervals[i].first), min(p.second, intervals[i].second)};
            }
            else {
                op = false;
                break;
            }
        }
        
        cout << "Case #" << _ << ": ";
        if(op) cout << setprecision(6) << p.first << "\n";
        else cout << -1 << "\n";
    }
    return 0;
}