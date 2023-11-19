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
    int n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        // cout << arr[i] << "\n";
    }
    sort(all(arr));
    vector<pair<ll,ll>> q;
    for(int j = 0; j < k; j++) {
        int c;
        ll v;
        cin >> c >> v;
        q.push_back({-v, c});
    }
    sort(all(q));
    ll ans = 0;
    int j = 0;
    for(int i = 0; i < n; i++) {
        
        if(j >= k || -q[j].first <= arr[i]) break;
        // cout << -q[j].first << " " << arr[i] << "\n";
        arr[i] = -q[j].first;
        q[j].second -= 1;
        if(q[j].second == 0) j++;
    }
    for(ll a : arr) ans += a;
    cout << ans << "\n";
    return 0;
}