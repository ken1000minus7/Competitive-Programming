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
    int n, m, k, s;
    cin >> n >> m >> k >> s;
    vector<int> types(n);
    for(int i = 0; i < n; i++) {
        cin >> types[i];
        types[i]--;
    }
    vector<vector<int> > adj(n, vector<int>());
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> count(n);
    queue<array<int, 3>> q;
    for(int i = 0; i < n; i++) {
        q.push({i, types[i], 0});
    }
    vector<vector<int> > done(n, vector<int>(k));
    vector<int> ans(n);
    while(!q.empty()) {
        auto i = q.front()[0];
        int t = q.front()[1];
        int c = q.front()[2];
        q.pop();
        if(done[i][t]) continue;
        if(count[i] >= s) continue;
        done[i][t]++;
        count[i]++;
        ans[i] += c;
        for(int j = 0; j < adj[i].size(); j++) {
            q.push({adj[i][j], t, c + 1});
        }
    }
    for(int i = 0; i < n; i++) {
        cout << ans[i] << ' ';
    }
    cout << "\n";
    return 0;
}