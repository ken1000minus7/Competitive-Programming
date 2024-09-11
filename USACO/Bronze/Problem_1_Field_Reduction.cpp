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
    if (fopen("reduce.in", "r")) {
		freopen("reduce.in", "r", stdin);
		freopen("reduce.out", "w", stdout);
	}
    int n;
    cin >> n;
    set<pair<ll, ll>> xsort, ysort;
    for(int i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;
        xsort.insert({x, y});
        ysort.insert({y, x});
    }
    ll c = 3;
    auto area = [&]() {
        auto minx = (*xsort.begin()).first;
        auto miny = (*ysort.begin()).first;
        auto maxx = (*prev(xsort.end())).first;
        auto maxy = (*prev(ysort.end())).first;
        // cout << "calledarea : " << minx << ' ' << maxx << " " << miny << " " << maxy << "\n";
        return (maxx - minx) * (maxy - miny);
    };

    ll ans = area();

    auto rev = [&](pair<ll, ll> p) {
        return make_pair(p.second, p.first);
    };

    auto dostuff = [&](auto &&self, int i) -> void {
        // cout << i << "\n";
        if(i >= 3) {
            ans = min(ans, area());
            // cout << ans << " " << area() << "\n";
            // cout << "sorted\n";
            // for(auto p : xsort) cout << p.first << " " << p.second << "\n";
            return;
        }

        auto minx = (*xsort.begin());
        auto miny = (*ysort.begin());
        auto maxx = (*prev(xsort.end()));
        auto maxy = (*prev(ysort.end()));

        xsort.erase(minx);
        ysort.erase(rev(minx));
        self(self, i + 1);
        xsort.insert(minx);
        ysort.insert(rev(minx));

        xsort.erase(maxx);
        ysort.erase(rev(maxx));
        self(self, i + 1);
        xsort.insert(maxx);
        ysort.insert(rev(maxx));

        ysort.erase(miny);
        xsort.erase(rev(miny));
        self(self, i + 1);
        ysort.insert(miny);
        xsort.insert(rev(miny));

        ysort.erase(maxy);
        xsort.erase(rev(maxy));
        self(self, i + 1);
        ysort.insert(maxy);
        xsort.insert(rev(maxy));

        self(self, i + 1);
    };

    dostuff(dostuff, 0);
    cout << ans << '\n';
    return 0;
}