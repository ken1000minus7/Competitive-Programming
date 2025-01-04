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
    ll a;
    cin >> a;
    ll ans = 0;
    for(ll i = 1; i <= 9; i++) {
        for(ll j = 1; j <= 9; j++) {
            ll c = i * j;
            if(c == a) continue;
            ans += c;
        }
    }
    cout << ans << "\n";
    return 0;
}