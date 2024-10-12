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
    pair<ld, ld> prev = {0.0, 0.0};
    ld ans = 0;
    for(int i = 0; i < n; i++) {
        ld x, y;
        cin >> x >> y;
        ans += sqrt(((x - prev.first) * (x - prev.first)) + ((y - prev.second) * (y - prev.second)));
        prev = {x, y};
    }
    ans += sqrt((prev.first * prev.first) + (prev.second * prev.second));
    cout << fixed << setprecision(20) << ans << "\n";
    return 0;
}