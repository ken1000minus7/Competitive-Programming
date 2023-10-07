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
    int n;
    cin >> n;
    vector<ll> sz(n), ct(n);
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    for(int i = 0; i < n; i++) {
        cin >> sz[i] >> ct[i];
        pq.push({sz[i], ct[i]});
    }
    
    ll ans = 0;
    while(!pq.empty()) {
        auto p = pq.top();
        pq.pop();
        while(!pq.empty() && pq.top().first == p.first) {
            p.second += pq.top().second;
            pq.pop();
        }
        ll nc = p.second / 2;
        ll left = p.second - (nc * 2);
        ans += left;
        if(nc > 0) pq.push({2 * p.first, nc});
    }
    cout << ans << "\n";
    return 0;
}