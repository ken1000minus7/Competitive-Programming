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
    ll x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5 >> x6 >> y6;
    ll h1 = min(x3, x5);
    ll h2 = max(x4, x6);
    ll v1 = min(y3, y5);
    ll v2 = max(y4, y6);
    // cout << h1 << " " << h2 << '\n';
    // cout << v1 << " " << v2 << "\n";
    if(h1 > x1 || h2 < x2 || v1 > y1 || v2 < y2) {
        YES
        return 0;
    }
    // cout << "next\n";

    bool bothcoverx = x3 <= x1 && x4 >= x2 && x5 <= x1 && x6 >= x2;
    bool bothcovery = y3 <= y1 && y4 >= y2 && y5 <= y1 && y6 >= y2;
    bool somefullcover = (x3 <= x1 && x4 >= x2 && y3 <= y1 && y4 >= y2) || (x5 <= x1 && x6 >= x2 && y5 <= y1 && y6 >= y2);
    bool op = bothcoverx || bothcovery;

    if(somefullcover) op = true;
    else if(bothcoverx) {
        vector<pair<ll, ll>> vsort = {{y3, y4}, {y5, y6}};
        sort(all(vsort));
        ll yy4 = vsort[0].second;
        ll yy5 = vsort[1].first;
        // cout << yy4 << " " << yy5 << "\n";
        if(!(yy4 >= yy5 || yy4 >= y2 || yy5 <= y1)) op = false;
    }
    else if(bothcovery) {
        vector<pair<ll, ll>> hsort = {{x3, x4}, {x5, x6}}; 
        sort(all(hsort));
        ll xx4 = hsort[0].second;
        ll xx5 = hsort[1].first;
        // cout << xx4 << " " << xx5 << "\n";
        if(!(xx4 >= xx5 || xx4 >= x2 || xx5 <= x1)) op = false;
    }
    if(!op) YES
    else NO
    return 0;
}
