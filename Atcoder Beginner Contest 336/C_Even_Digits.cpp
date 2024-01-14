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
    ll n;
    cin >> n;
    ll ans = 0;
    while(n > 0) {
        if(n <= 5) {
            ans += 2 * n - 2;
            break;
        }
        long double res = log(n) / log(5);
        ll p = res;
        ll used = pow(5, p);
        if(used == n) {
            while(p > 0) {
                auto add = 8 * pow(10, p - 1);
                ll lol = round(add);
                ans += lol;
                p--;
            }
        }
        else {
            auto add = 2 * pow(10, p);
            ll lol = round(add);
            ans += lol;
            // cout << add << "\n";
        }
        // cout << ans << " " << n << " " << res << " " << p << "\n";
        n -= used;
    }
    cout << ans << "\n";
    return 0;
}