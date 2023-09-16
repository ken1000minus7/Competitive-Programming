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
    vector<vector<vector<ll>>> persp(n, vector<vector<ll>>());
    vector<int> done(n);
    vector<pair<ll, ll>> pts(n, {-1, -1});
    pts[0] = {0, 0};
    queue<int> q;
    q.push(0);
    while(m--) {
        int a, b;
        ll x, y;
        cin >> a >> b >> x >> y;
        a--, b--;
        persp[a].push_back({(ll) b, x, y});
        persp[b].push_back({(ll) a, -x, -y});
    }
    while(!q.empty()) {
        int i = q.front();
        q.pop();
        if(done[i]) continue;
        done[i]++;
        for(auto v: persp[i]) {
            int b = v[0];
            ll x = v[1];
            ll y = v[2];
            pts[b] = {pts[i].first + x, pts[i].second + y};
            q.push(b);
        }
    }
    for(int i = 0; i < n; i++) {
        if(done[i]) {
            cout << pts[i].first << " " << pts[i].second << "\n";
        }
        else {
            cout << "undecidable\n";
        }
    }
    return 0;
}