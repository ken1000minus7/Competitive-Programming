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
    vector<ll> arr(2 * n);
    for(int i = 0; i < 2 * n; i++) {
        cin >> arr[i];
    }
    ll ans = INT32_MAX;
    for(int i = 0; i < 2 * n; i++) {
        for(int j = i + 1; j < 2 * n; j++) {
            ll cans = 0;
            vector<ll> curr;
            for(ll a : arr) curr.push_back(a);
            curr[i] = INT32_MAX;
            curr[j] = INT32_MAX;
            sort(all(curr));
            for(int k = 0; k < n - 1; k++) {
                int ki = 2 * k;
                cans += curr[ki + 1] - curr[ki];
            }
            ans = min(ans, cans);
        }
    }
    cout << ans << "\n";
}