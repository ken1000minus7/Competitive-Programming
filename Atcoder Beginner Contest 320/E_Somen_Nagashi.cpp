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
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> nood;
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    set<int> s;
    for(int i = 0; i < n; i++) s.insert(i);
    vector<ll> ans(n);
    for(int i = 0; i < m; i++) {
        ll t, w, tt;
        cin >> t >> w >> tt;
        while(!pq.empty() && pq.top().first <= t) {
            s.insert(pq.top().second);
            pq.pop();
        }
        if(s.empty()) continue;
        int j = *s.begin();
        ans[j] += w;
        s.erase(j);
        pq.push({t + tt, j});
    }
    for(int i = 0; i < n; i++) {
        cout << ans[i] << "\n";
    }
    return 0;
}