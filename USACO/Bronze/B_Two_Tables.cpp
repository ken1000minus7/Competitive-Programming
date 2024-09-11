#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"-1\n";
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;

 
int main()
{
    FIO
    int t;
    cin >> t;
    while(t--) {
        double x, y;
        cin >> x >> y;
        double x1, y1, x2, y2, w, h;
        cin >> x1 >> y1 >> x2 >> y2 >> w >> h;
        bool xposs = (x2 - x1) + w <= x;
        bool yposs = (y2 - y1) + h <= y;
        if(!xposs && !yposs) {
            NO
            continue;
        }
        double ans = x + y;
        if(xposs) {
            ans = min({ans, max(0.0, w - x1), max(0.0, w - (x - x2))});
        }
        if(yposs) {
            ans = min({ans, max(0.0, h - y1), max(0.0, h - (y - y2))});
        }
        cout << fixed << setprecision(9) << ans << "\n";
    }
    return 0;
}