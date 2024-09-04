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
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<ll> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            arr[i]--;
        }
        vector<ll> cost(m);
        ll j = 0;
        ll ans = 0;
        vector<pair<ll, ll>> csort;
        for(int i = 0; i < m; i++) {
            cin >> cost[i];
            csort.push_back({cost[i], i});
        }
        sort(all(csort));
        sort(all(arr), [&](ll &a, ll &b){
            return cost[a] > cost[b];
        });
        for(int i = 0; i < n; i++) {
            if(j < m && cost[arr[i]] > csort[j].first) {
                ans += csort[j].first;
                j++;
            }
            else {
                ans += cost[arr[i]];
            }
        }
        cout << ans << "\n";
    }
    return 0;
}