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
    ll a, b;
    cin >> a >> b;
    ll ans = 1;
    for(ll i = 0; i < b; i++) {
        ans *= a;
    }
    cout << ans << "\n";
    return 0;
}