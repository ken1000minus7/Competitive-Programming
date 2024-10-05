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
    int n;
    cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll ans = INT32_MAX;
    auto dostuff = [&](auto &&self, int i, ll a, ll b) -> void {
        if(i >= n) {
            ans = min(ans, max(a, b));
            return;
        }
        self(self, i + 1, a + arr[i], b);
        self(self, i + 1, a, b + arr[i]);
    };
    dostuff(dostuff, 0, ll(0), ll(0));
    cout << ans << "\n";
    return 0;
}