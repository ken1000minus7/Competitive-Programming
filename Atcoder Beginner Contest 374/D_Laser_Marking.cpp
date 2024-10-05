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
    FIO
    int n;
    cin >> n;
    ld s, t;
    cin >> s >> t;
    
    vector<vector<pair<ll, ll>>> arr;
    for(int i = 0; i < n; i++) {
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        arr.push_back({ {x1, y1}, {x2, y2}});
    }
    auto euclid = [&](pair<ll, ll> p1, pair<ll, ll> p2) {
        ld sq = (p1.first - p2.first) * (p1.first - p2.first) + (p1.second - p2.second) * (p1.second - p2.second);
        return sqrt(sq);
    };
    vector<int> done(n);
    auto dostuff = [&](auto &&self, pair<ll, ll> curr) -> ld {
        ld mini = INT32_MAX;
        for(int i = 0; i < n; i++) {
            if(done[i]) continue;
            done[i]++;
            ld dist1 = euclid(curr, arr[i][0]);
            ld dist2 = euclid(curr, arr[i][1]);
            ld linedist = euclid(arr[i][0], arr[i][1]);
            ld tline = linedist / t;
            ld t1 = dist1 / s;
            ld t2 = dist2 / s;
            mini = min({mini, t1 + tline + self(self, arr[i][1]), t2 + tline + self(self, arr[i][0])});
            done[i]--;
        }
        return mini == INT32_MAX ? 0 : mini;
    };
    cout << fixed << setprecision(20) << dostuff(dostuff, {0, 0}) << "\n";
    return 0;
}